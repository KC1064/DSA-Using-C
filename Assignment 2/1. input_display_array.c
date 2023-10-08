//WAP for user inputted array and display it.
#include<stdio.h>
main(){
    int arr[20],size,index;
    printf("Enter the size of array-:");
    scanf("%d",&size);
    for(index=0;index<size;index++){
        printf("Enter the value-:");
        scanf("%d",&arr[index]);
    }
    printf("THe user inputted array is-:\n");
    for(index=0;index<size;index++){
        printf("%d ",arr[index]);
    }

}