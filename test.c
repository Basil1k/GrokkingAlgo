#include "test.h"

int main(int argc, char** argv) {
  (void)argc;
  (void)argv;
  srand(time(NULL));

  printf("========GROKKING ALGORITMS========\n");
  // test_bubble_sort();
  // test_binay_search();
  test_quick_sort();

  for (int i = 0; i < 1000; i++) {
    printf("Number № %d\n", i + 1);
    test_quick_sort();
  }

  return 0;
}

void test_bubble_sort() {
  int len = 10;
  int* arr = get_random_arr(len, 0, 100);

  printf("\nBubble sort\nBefore:\t");
  print_arr(arr, len);

  bubble_sort(arr, len, 0);
  printf("After0:\t");
  print_arr(arr, len);

  bubble_sort(arr, len, 1);
  printf("After1:\t");
  print_arr(arr, len);

  free(arr);
}

void test_quick_sort() {
  int len = 10;
  int* arr = get_random_arr(len, 0, 100);

  printf("\nQuick sort\nBefore:\t");
  print_arr(arr, len);

  quick_sort(arr, 0, len - 1, 0);
  printf("After0:\t");
  print_arr(arr, len);

  quick_sort(arr, 0, len - 1, 1);
  printf("After1:\t");
  print_arr(arr, len);
  free(arr);
}

void test_binay_search() {
  int len = 10;
  int* arr = get_random_arr(len, 0, 100);
  int target_index = rand() % len;

  printf("\nBinary search\nArray:\t");
  bubble_sort(arr, len, 0);
  print_arr(arr, 10);

  printf("\nTarget: %d\t Index: %d", arr[target_index], target_index);
  int result_index = binary_search(arr, len, arr[target_index]);

  printf("\nResult: %d\t Index: %d\n", arr[result_index], result_index);
}
