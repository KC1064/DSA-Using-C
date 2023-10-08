//WAP to input an array and find if the element is present if present at what index and no. of times
#include<stdio.h>
main(){
    int arr[20],size,index,flag=0,num,cnt=0;
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
            cnt=cnt+1;
            printf("%d is present at %d\n",num,index);
        }
    }
    if(flag==1){
        printf("%d is present in the array.\n",num);
    }
    else{
        printf("%d is not present in the array.",num);
    }
    printf("%d occurs %d times in array",num,cnt);
    
}