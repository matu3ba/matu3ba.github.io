#include <stdint.h>
void allowed_aliasing(uint16_t *bytes, int32_t len_bytes, uint16_t *lim) {
  for (int i = 0; i < len_bytes; i += 1) {
    if (bytes == lim)
      break;
    bytes[i] = 42;
  }
}
