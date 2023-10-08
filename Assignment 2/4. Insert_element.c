//WAP to insert an element into array at agiven index.
#include<stdio.h>
main(){
    int arr[20],size,index,num,ins_ind;
    printf("Enter the size of array-:");
    scanf("%d",&size);
    for(index=0;index<size;index++){
        printf("Enter the value-:");
        scanf("%d",&arr[index]);
    }
    printf("Enter the value to insert-:");
    scanf("%d",&num);
    printf("Index where to be inserted-:");
    scanf("%d",&ins_ind);
    for(index=ins_ind;index<size+1;index++){
        arr[index+1]=arr[index];
    }
    arr[ins_ind]=num;
    printf("The new array is-:\n");
    for(index=0;index<size+1;index++){
        printf("%d ",arr[index]);
    }
}