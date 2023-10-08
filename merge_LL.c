//Implementation of reversing a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;
//node* start=NULL;
node* start1=NULL;
node* start2=NULL;
node *create(node* link){
	int total,index,item;
	node *temp,*ptr;
	printf("\nEnter the no. of nodes-:\n");
	scanf("%d",&total);
	//printf("Enter the value to insert-: ");
	//scanf("%d",&link->info);
	//link->next=NULL;
	//start = link;
	for(index=0;index<total;index++){
		temp=(node*)malloc(sizeof(node));
		printf("Enter the value to insert-:");
		scanf("%d",&item);
		temp->info=item;
		temp->next=NULL;
		if(link==NULL){
			link=temp;
		}
		else{
			ptr=link;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
	}
	printf("-----LINKED LIST------\n");
	ptr=link;
	while(ptr!=NULL){
		printf("%d ",ptr->info);
		ptr=ptr->next;
	}
	printf("\n");
	return link;
}

main(){
	node* temp;
	start1=create(start1);
	start2=create(start2);
	temp=start1;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=start2;
	printf("\n-----MERGED LIST-----\n");
	temp=start1;
	while(temp!=NULL){
		printf("%d ",temp->info);
		temp=temp->next;
	}
	printf("\n");
}


 	       	
