//WAP to calculate the postfix 
#include<stdio.h>
#include<ctype.h>
#define max 50
int stack[max],top=-1;
void push(int x){
	if(top==max-1){
		printf("Stack Overflow");
	}
	else{
		top++;
		stack[top]=x;
	}
}

int pop(){
	if(top==-1){
		printf("Stack Underflow");
	}
	else{
		int temp;
		temp=stack[top];
		top--;
		return temp;
	}
}

main(){
	char string[max];
	printf("Enter the string-:");
	scanf("%s",string);
	char ch;
	int i,op1,op2,res;
	for(i=0;string[i]!='\0';i++){
		ch=string[i];
		if(isdigit(ch)){
			push(ch-'0');
		}
		else{
			if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
				op1=pop();
				op2=pop();
				switch(ch){
					case '+':
						res=op2+op1;
						push(res);
						break;
					case '-':
						res=op2-op1;
						push(res);
						break;
					case '*':
						res=op2*op1;
						push(res);
						break;
					case '/':
						res=op2/op1;
						push(res);
						break;

				}
			}
		}
	//	printf("The result is %d",stack[top]);
	}
	printf("The result is %d\n",stack[top]);
}
