#include <stdint.h>
#include <stdlib.h>
struct sStruct1 {
  uint8_t a1;
  uint8_t a2;
  uint32_t b1;
  uint32_t b2;
};
void padding() {
  struct sStruct1 *str1 = malloc(sizeof(struct sStruct1));
  str1->a1 = 5;
  free(str1);
}
