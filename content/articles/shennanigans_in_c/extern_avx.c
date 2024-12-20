#include "extern_avx.h"
/// requires 32 byte aligned src, dest; src and dest must not overlap
void memcpy_avx(__m256i *__restrict src, __m256i *__restrict dest, size_t n) {
  size_t n_vec = n / sizeof(__m256i);
  for (size_t i = 0; i < n_vec; i += 1) {
    __m256i const temp = _mm256_load_si256(src);
    _mm256_store_si256(dest, temp);
    src += 1;
    dest += 1;
  }
}
