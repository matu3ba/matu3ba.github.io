#include <stdint.h>
#include <stdio.h>

#include "extern_avx.h"
int main(void) {
  uint8_t mem_src[1024] = {0};
  uint8_t mem_dest[1024] = {0};
  uint16_t const alignment = 32;
  uint16_t const align_min_1 = alignment - 1;
  __m256i *p_src = (void *)(((uintptr_t)mem_src + align_min_1) & ~(uintptr_t)align_min_1);
  __m256i *p_dest = (void *)(((uintptr_t)mem_dest + align_min_1) & ~(uintptr_t)align_min_1);
  memcpy_avx(p_src, p_dest, 4);
  fprintf(stdout, "p_src: %p, p_dest: %p\n", (void *)p_src, (void *)p_dest);
  return 0;
}
// clang -Weverything -O3 -march=native memcpy_avx.c extern.c && ./a.out
// Output (contains C++ warnings):
// extern.c:8:5: warning: unsafe pointer arithmetic [-Wunsafe-buffer-usage]
//     8 |     src += 1;
//       |     ^~~
// extern.c:9:5: warning: unsafe pointer arithmetic [-Wunsafe-buffer-usage]
//     9 |     dest += 1;
//       |     ^~~~
// 2 warnings generated.
// p_src: 0x7ffceb985a60, p_dest: 0x7ffceb985660
