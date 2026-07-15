#include "arrays.h"

/**
 * Function print array of integer in stdout.
 * @param arr Pointer on search array of int.
 * @param len Arrays length.
 * @author Basil1k
 */
void print_arr(int* arr, int len) {
  printf("{");

  for (int i = 0; i < len * 2 - 1; i++) {
    if (i % 2) {
      printf(", ");
    } else {
      printf("%d", arr[i / 2]);
    }
  }
  printf("}\n");
}

int* get_random_arr(int length, int min, int max) {
  int* arr = calloc(length, sizeof(int));

  if (arr != NULL) {
    for (int i = 0; i < length; ++i) {
      arr[i] = rand() % (max - min) + min;
    }
  }

  return arr;
}
