#include <cstddef>
#include <cstdint>
#include <cstdio>
template<typename T, size_t S> inline constexpr size_t fname_offs(T const (&str)[S], size_t i = S - 1) {
  return (str[i] == '/' || str[i] == '\\') ? i + 1 : (i > 0 ? fname_offs(str, i - 1) : 0);
}
template<typename T> inline constexpr size_t fname_offs(T (&str)[1]) { return 0; }
namespace util_force_const_eval {
template<typename T, T v> struct const_expr_value {
  static constexpr T const value = v;
};
} // namespace util_force_const_eval
#define FORCE_CONST_EVAL(exp) ::util_force_const_eval::const_expr_value<decltype(exp), exp>::value
#define LEAF(FN) (&FN[FORCE_CONST_EVAL(fname_offs(FN))])

int testEq(int32_t a, int32_t b) {
  if (a != b) {
    // Prefer __FILE_NAME__, which also works in C. Ideally, the compiler
    // can be told to provide relative file paths.
    fprintf(stderr, "%s:%d got '%d' expected '%d'\n", LEAF(__FILE__), __LINE__, a, b);
    return 1;
  }
  return 0;
}
