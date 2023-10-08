#include<stdbool.h>
#include<stdio.h>
#define size 10
int stack[size],top=-1;
bool isfull(){
    if(top==size-1){
        return 1;
    }
    else{
        return 0;
    }
}

bool isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int n){
    if(isfull()==0){
        top++;
        stack[top]=n;
    }
    else{
        printf("Stack is full");
    }
}

int pop(){
    if(isEmpty()==0){
        int t=stack[top];
        top--;
        return t;
    }
    else{
        printf("Stack is empty");
    }
}

void display(){
    int i;
    if(isEmpty()==0){
        printf("Stack-:");
        for(i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    }
    else{
        printf("Stack is empty");
   }
}

main(){
    display();
    push(10);
    push(23);
    push(41);
    push(17);
    display();
    pop();
    pop();
    pop();
    display();
    push(18);
    display();
}