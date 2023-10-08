//WAP to implement linear search.
#include<stdio.h>
main(){
    int arr[20],size,index,flag=0,num;
    printf("Enter the size of array-:");
    scanf("%d",&size);
    for(index=0;index<size;index++){
        printf("Enter the value-:");
        scanf("%d",&arr[index]);
    }
    printf("Enter the value to search-:");
    scanf("%d",&num);
    for(index=0;index<size;index++){
        if(arr[index]==num){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d is present in the array.",num);
    }
    else{
        printf("%d is not present in the array.",num);
    }
}