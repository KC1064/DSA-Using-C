//WAP that will reverse a inpuuted number by user.
#include<stdio.h>
int main(){
    int num,reverse=0,remainder;
    printf("Enter the number-:");
    scanf("%d",&num);
    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    printf("The reversed number is -: %d",reverse);
}
