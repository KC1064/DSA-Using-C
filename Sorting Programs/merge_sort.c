#include <stdio.h>

void merge(int arr[], int low, int mid, int high);
void mergeSort(int arr[], int low, int high);

void merge(int arr[], int low, int mid, int high) {
    int i, j, k;
    int temp[30];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int len, i;
    int array[30];

    printf("Enter the length of the array: ");
    scanf("%d", &len);

    printf("Enter the elements: ");
    for (i = 0; i < len; i++) {
        scanf("%d", &array[i]);
    }

    mergeSort(array, 0, len - 1);

    printf("Sorted array: ");
    for (i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
