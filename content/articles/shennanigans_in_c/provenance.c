#include <stdio.h>
#include <stdlib.h>
void use_ptr(int *arr) { printf("0: %d, 9: %d\n", arr[0], arr[9]); }
int main() {
  int arr1[10];
  use_ptr(arr1);
  int *arr2 = malloc(sizeof(int));
  use_ptr(arr2);
  free(arr2);
}
