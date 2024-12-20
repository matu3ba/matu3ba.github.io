#include <cstdint>
#include <stdexcept>
int why_exceptions_dont_scale(char *errmsg_ptr, uint32_t *errmsg_len) {
  constexpr char const_drivermsg[] = "DriverError: ";
  constexpr char const_initmsg[] = "InitError: ";
  constexpr char const_nocamfoundmsg[] = "NoCameraFound: ";
  // Underlying idea: prefix exception strings with text. Below case handling
  // shows how error prone this is to make runtime decisions with C abi
  // compatibility across dll. And this does not cover compiler mangling and
  // dependency on runtime etc.
  // Further more, tooling like clangd is unable to infer all possible strings
  // to enforce correct error handling of the bubbled up exceptions and not even
  // all possible derived exception types.
  struct SomeDll some_dll;
  try {
    some_dll.SetupDll("someconfig_file");
  } catch (std::runtime_error &rt_err) {
    std::string err = rt_err.what();
    // std::string::StartsWith : err.rfind("DriverError:", 0) == 0)
    if (err.rfind(const_drivermsg, 0) == 0) {
      int st = snprintf(&errmsg_ptr[0], *errmsg_len, "%s", &err.c_str()[sizeof(const_drivermsg)]);
      if (st <= 0)
        return 1; // C89 allows less than 1, C99 NULL
      return 2;
    } else if (err.rfind(const_initmsg, 0) == 0) {
      int st = snprintf(&errmsg_ptr[0], *errmsg_len, "%s", &err.c_str()[sizeof(const_initmsg)]);
      if (st <= 0)
        return 1;
      return 2;
    } else if (err.rfind(const_nocamfoundmsg, 0) == 0) {
      int st = snprintf(&errmsg_ptr[0], *errmsg_len, "%s", &err.c_str()[sizeof(const_nocamfoundmsg)]);
      if (st <= 0)
        return 1;
      return 3;
    }
  } catch (std::exception &exc) {
    std::string err = exc.what();
    int st = snprintf(&errmsg_ptr[0], *errmsg_len, "%s", &err.c_str()[sizeof(const_nocamfoundmsg)]);
    if (st <= 0)
      return 1;
    return 100;
  }
  return 0;
}
