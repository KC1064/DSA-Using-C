//Write a menu driven program to implement a queue by using array.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 5
int queue[max],front=-1,rear=-1;
bool isFull(){
	if(rear==max-1){
		printf("Queue Overflow");
		return true;
	}
	else{
		return false;
	}
}

bool isEmpty(){
	if(front==-1 || front==rear+1){
		printf("Queue Underflow");
		return true;
	}
	else{
		return false;
	}
}

void insert(int n){
	if(isFull()==true){
		printf("Queue Overflow");
	}
	else{
		if(front==-1 && rear==-1){
			rear++;
			front++;
			queue[rear]=n;
		}
		else{
			rear++;
			queue[rear]=n;
		}
	}
}

int delete(){
	if(isEmpty()==true){
		printf("Queue Underflow");
	}
	else{
		printf("Deleted value is %d\n",queue[front]);
		front++;
	}
}

void display(){
	int temp;
	temp=front;
	if(isEmpty()==true){
		printf("Queue is Empty");
	}
	else{
		while(temp<=rear){
			printf("%d ",queue[temp]);
			temp++;
		}
	}
}

main(){
	int choice;
	int num;
	while(1){
		printf("\n1.INSERT TO QUEUE\n2.DELETE FROM QUEUE\n3.DISPLAY THE QUEUE\n4.TO CHECK OVERFLOW\n5.TO CHECK UNDERFLOW\n6.EXIT\n ");
		printf("Enter the choice-:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the number to insert-:");
				scanf("%d",&num);
				insert(num);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				isFull();
				break;
			case 5:
				isEmpty();
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Invalid Choice");
		}
	}
}
