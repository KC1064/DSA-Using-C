#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
char str[max];
int top=-1;
void push(char c){
    top++;
    str[top]=c;
}
char pop(){
    char temp=str[top];
    top--;
    return temp;
}

main(){
    char string[max];
    printf("Enter the string-:");
    fgets(string,max,stdin);
    int i;
    int len=strlen(string);
    for(i=0;i<len;i++){
        push(string[i]);
    }
    for(i=0;i<len;i++){
        string[i]=pop();
    }
    printf("Reverse string-:%s\n",string);
}