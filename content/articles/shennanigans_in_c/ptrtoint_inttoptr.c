#include <assert.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static void memset_16aligned(void *ptr, char byte, size_t size_bytes, uint16_t alignment) {
  assert((size_bytes & (alignment - 1)) == 0);     // Size aligned
  assert(((uintptr_t)ptr & (alignment - 1)) == 0); // Pointer aligned
  memset(ptr, byte, size_bytes);
}
// 1. Careful with segmented address spaces: lookup uintptr_t semantics
// 2. Careful with long standing existing optimization compiler bugs pointer to
// integer and back optimizations in for example clang and gcc
// 3. Careful with LTO potentially creating problem 2.
// 4. Consider C11 aligned_alloc or posix_memalign
void ptrtointtoptr() {
  uint16_t const alignment = 16;
  uint16_t const align_min_1 = alignment - 1;
  void *mem = malloc(1024 + align_min_1);
  // C89: void *ptr = (void *)(((INT_WITH_PTR_SIZE)mem+align_min_1) & ~(INT_WITH_PTR_SIZE)align_min_1);
  // ie void *ptr = (void *)(((uint64_t)mem+align_min_1) & ~(uint64_t)align_min_1);
  // offset ptr to next alignment byte boundary
  void *ptr = (void *)(((uintptr_t)mem + align_min_1) & ~(uintptr_t)align_min_1);
  printf("0x%08" PRIXPTR ", 0x%08" PRIXPTR "\n", (uintptr_t)mem, (uintptr_t)ptr);
  memset_16aligned(ptr, 0, 1024, alignment);
  free(mem);
}
