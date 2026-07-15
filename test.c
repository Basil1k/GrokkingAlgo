#include "test.h"

int main(int argc, char** argv) {
  (void)argc;
  (void)argv;
  srand(time(NULL));

  printf("========GROKKING ALGORITMS========\n");
  test_bubble_sort();
  test_binay_search();
  return 0;
}

void test_bubble_sort() {
  int len = 10;
  int* arr = get_random_arr(len, 0, 100);

  printf("Bubble sort\nBefore: ");
  print_arr(arr, len);

  bubble_sort(arr, len, 0);

  printf("After:  ");
  print_arr(arr, len);
  printf("\n");
  free(arr);
}

void test_binay_search() {
  int len = 10;
  int* arr = get_random_arr(len, 0, 100);
  int target_index = rand() % len;

  printf("Binary search\nArray: ");
  bubble_sort(arr, len, 0);
  print_arr(arr, 10);

  printf("\nTarget: %d\t Index: %d", arr[target_index], target_index);
  int result_index = binary_search(arr, len, arr[target_index]);

  printf("\nResult: %d\t Index: %d\n", arr[result_index], result_index);
}