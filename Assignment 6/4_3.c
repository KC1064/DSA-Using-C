//Implement a circular queue using menu driven program
#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=-1,rear=-1;
int queue[max];
void insert(int num){
	if((rear==max-1 && front==0) || (front==rear+1)){
		printf("Queue is full");
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		queue[rear]=num;
	}
	else if(rear==max-1){
		rear=0;
		queue[rear]=num;
	}
	else{
		rear++;
		queue[rear]=num;
	}
}

int delete(){
	int num;
	if(front==-1 && rear==-1){
		printf("Queue is empty");
	}
	else if(front==rear){
		num=queue[front];
		front=rear-1;
	}
	else if(front==max-1){
		num=queue[front];
		front=0;
	}
	else{
		num=queue[front];
		front++;
	}
	return num;
}

void display(){
	if(front==-1 && rear==-1){
		printf("Queue is empty");
	}
	else{
	int i;
	printf("Queue-: ");
	if(front<=rear){
		for(i=front;i<=rear;i++){
			printf("%d ",queue[i]);
		}
	}
	else{
		for(i=front;i<max;i++){
			printf("%d ",queue[i]);
		}
		for(i=0;i<=rear;i++){
			printf("%d ",queue[i]);
		}
	}
	printf("\n");
	}
}

main(){
	int opt,n;
	while(1){
		printf("\n1. INSERT ELEMENT\n2. DELETE ELEMENT\n3. DISPLAY ELEMENT\n4. EXIT\n");
		printf("Enter your choice:");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				printf("Enter the number to insert-:");
				scanf("%d",&n);
				insert(n);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("EXITING....");
				exit(0);
				break;
			default:
				printf("Invalid Choice");

		}
	}
}
