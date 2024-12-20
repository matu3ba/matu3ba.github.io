#include <stdint.h>
#include <string.h>
void use_bytes(uint8_t *bytes, int32_t len_bytes, uint32_t *output, int32_t len_output) {
  for (int i = 0; i * 4 < len_bytes && i < len_output; i += 4) {
    memcpy(&output[i], &bytes[4 * i], sizeof(len_output));
  }
}
