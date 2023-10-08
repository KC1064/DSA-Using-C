//WAP to delete an element into array at a given index.
#include<stdio.h>
main(){
    int arr[20],size,index,del_ind;
    printf("Enter the size of array-:");
    scanf("%d",&size);
    for(index=0;index<size;index++){
        printf("Enter the value-:");
        scanf("%d",&arr[index]);
    }
    printf("Index to delete value-: ");
    scanf("%d",&del_ind);
    for(index=del_ind;index<size-1;index++){
        arr[index]=arr[index+1];
    }
    printf("The resultant array is-:\n");
    for(index=0;index<size;index++){
        printf("%d ",arr[index]);
    }
}