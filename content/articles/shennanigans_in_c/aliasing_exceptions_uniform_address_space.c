#include <assert.h>
#include <stdint.h>
uint8_t external_memory[1024];
typedef int (*pfn_add_one)(int);
int add_one(int x) { return x + 1; }
void usage(int x) {
  // read fn ptr from external code
  void *pv_add_one = (void *)external_memory;
  pfn_add_one pfn_add_one_casted = (pfn_add_one)pv_add_one;
  int res = pfn_add_one_casted(1);
  assert(res == 2);
}
