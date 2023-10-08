//SUM OF DIGITS using stack
#include<stdio.h>
#include<stdlib.h>
#define max 50
int stack[max];
int top=-1;
void push(char c){
    top++;
    stack[top]=c;
}
int pop(){
    char temp=stack[top];
    top--;
    return temp;
}

main(){
    int num,sum=0;
    printf("Enter the number-:");
    scanf("%d",&num);
    while(num>0){
        push(num%10);
        sum=sum+pop();
        num=num/10;
    }
    printf("Sum of digits is %d\n",sum);
    
}