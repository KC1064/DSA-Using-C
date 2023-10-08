//Convert a decimal number to binary using stack
#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int num) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
    }
    else{
    stack[++top] = num;
    }
}

int pop(){
    if (top==-1) {
        printf("Stack underflow!\n");
        //return -1;
    }
    else{
        return stack[top--];
    }
}

void binary(int num) {
    while (num!=0) {
        push(num%2);
        num/=2;
    }
}

main(){
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    binary(num);
    printf("The binary equivalent of %d is: ", num);
    while (top!=-1) {
        printf("%d", pop());
    }
    printf("\n");
}

