//Implementation of insertion sort.
#include<stdio.h>
void insertionsort(int arr[], int size) {
    int i,j;
    int temp;
    for(j=1;j<size;j++){
        temp=arr[j];
        i=j-1;
        while(i>=0 && temp < arr[i]){
            arr[i+1]=arr[i];
            i--;
        }
        i++;
        arr[i]=temp;
    }
}

int main(){
    int n,i;
    int array[20];
    printf("Enter the size of array-: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter element %d -:",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nValue before sorting\n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    insertionsort(array,n);
    printf("\nValue after sorting\n");
    for (i = 0 ; i < n ; i++){
        printf ("%d ", array [i] );
    }
    return 0;  
}