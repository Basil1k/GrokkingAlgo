#include "algoritms.h"

/**
 * Function try finds integer value in arr.
 * O(log n)
 * @param arr Pointer sorted array of int.
 * @param len Arrays length.
 * @param value Target value.
 * @returns Index of first found value in arr. If not found -1.
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
 * @returns 0 on success, -1 on error.
 * @author Basil1k
 */
int bubble_sort(int* arr, int len, int mode) {
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

  return 0;
}

/**
 * Function quick sort array of integers.
 * O(nlogn)
 * @param arr Pointer on search array of int.
 * @param low Lower boundary of the array.
 * @param high Higher boundary of the array.
 * @param mode 0 - increase, 1 - decrease.
 * @returns 0 on success, -1 on error.
 * @author Basil1k
 */
int quick_sort(int* arr, int low, int high, int mode) {
  if (low >= high) return 0;

  int pivot = arr[low + rand() % (high - low + 1)];
  int left = low;
  int right = high;
  int temp;

  while (left < right) {
    if (mode) {
      while (arr[left] > pivot) left++;
      while (arr[right] < pivot) right--;
    } else {
      while (arr[left] < pivot) left++;
      while (arr[right] > pivot) right--;
    }

    if (left <= right) {
      temp = arr[left];
      arr[left] = arr[right];
      arr[right] = temp;
      left++;
      right--;
    }
  }

  quick_sort(arr, low, right, mode);
  quick_sort(arr, left, high, mode);

  return 0;
}