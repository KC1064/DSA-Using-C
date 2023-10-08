#include<stdio.h>
#include<stdlib.h>
#define max 100
int stack[max],top=-1;
void push(){
    if(stack==max-1){
        printf("Stack Overflow");
    }
    else{
        int num;
        printf("Enter the number to push-:");
        scanf("%d",&num);
        top++;
        stack[top]=num;
    }
}

void pop(){
    if(top==-1){
        printf("Stack underflow");
    }
    else{
        int temp=stack[top];
        top--;
        return temp;
    }
}

void display(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        int i;
        for(i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
}

main(){
    int option;
    while(1){
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&option);
        switch(option){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:
            printf("Invalid choice");
        }
    }
}