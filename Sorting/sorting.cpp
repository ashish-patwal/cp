#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    cout << arr[i] << " ";
    cout << endl;
  }
}

void bubbleSort(int arr[], int n) {
  bool swapped;
  for (int i{}; i < n - 1; i++) {
    swapped = false;
    for (int j{}; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }
}

void insertionSort(int arr[], int n) {
  int i, j, key;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
}

void selectionSort(int arr[], int n) {
  int i, j, min_idx;

  for (i = 0; i < n; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }
    if (min_idx != i) {
      swap(arr[min_idx], arr[i]);
    }
  }
}

void countSort(int arr[], int n) {
  int maxi = INT_MIN;
  for (int i{}; i < n; i++) {
    maxi = max(maxi, arr[i]);
  }

  vector<int> countarr(maxi + 1, 0);

  for (int i{}; i < n; i++) {
    countarr[arr[i]]++;
  }

  for (int i{}, j{}; i <= maxi; i++) {
    while (countarr[i]) {
      arr[j] = i;
      countarr[i]--;
      j++;
    }
  }
}

int main(int argc, char *argv[]) {
  int arr[] = {64, 13, 11, 25, 13, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);

  /* bubbleSort(arr, n); */
  /* insertionSort(arr, n); */
  /* selectionSort(arr, n); */
  countSort(arr, n);
  cout << "Sorted array: \n";
  printArray(arr, n);

  return 0;
}
