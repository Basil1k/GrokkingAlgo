#include "algoritms.h"

int main(char** argv, int argc) {
  printf("========GROKKING ALGORITMS========");
  test_binay_search();
  return 0;
}

void test_binay_search() {
  int arr[10] = {-2, 0, 3, 8, 11, 19, 23, 39, 45, 97};
  int target = 45;

  printf("Array: ");
  for (int i = 0; i < 10; i++) {
    printf("%i, ", arr[i]);
  }
  printf("\nSearch for: %i\n", target);
  int* result = binary_search_int(&arr, 10, target);

  printf();
}
