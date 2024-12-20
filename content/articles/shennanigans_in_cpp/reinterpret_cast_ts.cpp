#include <cstdint>
int64_t usage_ptr(int64_t *val) { return *val; }
int32_t reinterpret_cast_usage() {
  // clang-format: off
  uint8_t some_vals[9] = {0, 1, 0, 0, 0, 0, 0, 0, 0};
  // clang-format: on
  int64_t val_mcpy;
  // val_mcpy = memcpy(&val_mcpy, some_vals[1], sizeof(val_mcpy);  // refusal to compile
  val_mcpy = memcpy(&val_mcpy, &some_vals[1], sizeof(val_mcpy));    // refusal to compile
  int64_t val_wrong = *reinterpret_cast<int64_t *>(some_vals[1]);   // runtime error
  int64_t val_ok = *reinterpret_cast<int64_t *>(&some_vals[1]);     // correct usage
  int64_t *val_ok_ptr = reinterpret_cast<int64_t *>(&some_vals[1]); // correct usage
  usage_ptr(val_ok_ptr);
  usage_ptr(&val_mcpy); // necessary temporary copy hopefully elided
  if (val_ok != INT64_MIN)
    return 1;
  return 0;
}
