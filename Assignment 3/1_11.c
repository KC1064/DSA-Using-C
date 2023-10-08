#include <stdio.h>
void input(int arr[30],int size){
    int index;
    for(index=0;index<size;index++){
        printf("Enter the values-:");
        scanf("%d",&arr[index]);
    }    
}
void selectionSort(int arr[30], int size) {
    int index, j, min_idx;
    for (index=0;index<size-1;index++) {
        min_idx = index;
        for (j = index+1;j<size;j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void display(int arr[30],int size){
    int index;
    for(index=0;index<size;index++){
        printf("%d\t",arr[index]);
    }
}

main() {
    int arr[20];
    int size=6;
    input(arr,size);
    selectionSort(arr,size);
    display(arr,size);
    printf("\n");
}
