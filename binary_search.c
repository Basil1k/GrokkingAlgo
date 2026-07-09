#include "binary_search.h"

/**
 * Function try finds integer value in arr.
 * @param arr Pointer on search array.
 * @param len Arrays length.
 * @param value Target value.
 * @returns If value found - pointer on value in arr, else NULL.
 * @author Basil1k
 */
int* binary_search_int(int* arr, int len, int value) {
  int* output = NULL;
  int index;
  int low = 0;
  int high = len - 1;

  while (low != high) {
    index = (high + low) / 2;

    if (arr[index] < value) {
      high = index;
    } else if (arr[index] > value) {
      low = index;
    } else {
      output = arr + index;
      low = high;
    }
  }

  return output;
}