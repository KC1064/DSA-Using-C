//Check if pallindrome or not
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
    printf("Enter the string: ");
    fgets(string,max,stdin);
    int len=strlen(string)-1;
    for(int i=0; i<len; i++){
        push(string[i]);
    }
    int cnt=1;
    for(int i=0; i<len; i++){
        char x=pop();
        if(x!=string[i]){
            cnt=0;
            break;
        }
    }
    if(cnt==1){
        printf("%s is a palindrome\n", string);
    }
    else{
        printf("%s is not a palindrome\n", string);
    }
    return 0;
}
