#include <stdint.h>
#include <string.h>
int ptr_no_reinterpret_cast() {
  uint8_t arr[4] = {0, 0, 0, 1};
  // unnecessary variable hopefully elided
  uint32_t u32_arr = 0;
  memcpy(&u32_arr, &arr[0], 4);
  uint32_t *u32_arr_ptr = &u32_arr;
  // <use u32_arr_ptr here>
  // Footgun: Dont return stack local variables
  (void)u32_arr_ptr;
  return 0;
}
