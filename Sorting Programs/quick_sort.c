//Implementation of quick sort
#include<stdio.h>
#include<stdlib.h>

void QuickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int* a, int* b);

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int position = partition(arr, low, high);
        QuickSort(arr, low, position - 1);
        QuickSort(arr, position + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
  
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
  
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int array[30];
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nValues before sorting: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    QuickSort(array, 0, size - 1);

    printf("\nValues after sorting: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
