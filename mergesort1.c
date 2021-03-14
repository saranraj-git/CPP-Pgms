#include <stdio.h>

void mergeSort(int arr[], int l, int r) {

  if (l < r) {
    int m = l + (r - l) / 2;
    printf("MergeSort one l = %d, m = %d, r = %d\n",l,m,r);
    mergeSort(arr, l, m);

    printf("MergeSort two l = %d, m = %d, r = %d\n",l,m,r);
    mergeSort(arr, m + 1, r);

  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[] = {6, 5, 12, 8, 7};
  int size = sizeof(arr) / sizeof(arr[0]);
  //printf("total size of array %d \n , individual element size is %d \n",sizeof(arr), sizeof(arr[2]));

  mergeSort(arr, 0, size - 1);
}
