#include "algoritms.h"

/**
 * Function try finds integer value in arr.
 * O(log n)
 * @param arr Pointer sorted array of int.
 * @param len Arrays length.
 * @param value Target value.
 * @returns If value found index of value in arr, else -1.
 * @author Basil1k
 */
int binary_search(int* arr, int len, int value) {
  int curr;
  int low = 0;
  int high = len - 1;

  while (low <= high) {
    curr = (high + low) / 2;

    if (arr[curr] < value) {
      low = curr + 1;
    } else {
      high = curr - 1;
    }
    if (arr[curr] == value) {
      return curr;
    }
  }

  return -1;
}

/**
 * Function bubble sort array of integers.
 * O(n^2)
 * @param arr Pointer on search array of int.
 * @param len Arrays length.
 * @param mode 0 - increase, 1 - decrease.
 * @author Basil1k
 */
void bubble_sort(int* arr, int len, int mode) {
  int temp;

  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - 1; j++) {
      if (mode) {
        if (arr[j + 1] > arr[j]) {
          temp = arr[j + 1];
          arr[j + 1] = arr[j];
          arr[j] = temp;
        }
      } else {
        if (arr[j + 1] < arr[j]) {
          temp = arr[j + 1];
          arr[j + 1] = arr[j];
          arr[j] = temp;
        }
      }
    }
  }
}