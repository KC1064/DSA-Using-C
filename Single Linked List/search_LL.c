//Implementation of reversing a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;
node* start=NULL;
node* start1=NULL;
node* start2=NULL;
node *create(node* link){
	int total,index,item;
	node *temp,*ptr;
	printf("\nEnter the no. of nodes-:\n");
	scanf("%d",&total);
	printf("Enter the value to insert-: ");
	scanf("%d",&link->info);
	link->next=NULL;
	start = link;
	for(index=0;index<total-1;index++){
		temp=(node*)malloc(sizeof(node));
		printf("Enter the value to insert-: ");
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
	//printf("-----LINKED LIST------\n");
    int num;
    int count=1;
    printf("Enter the value to search-:\n");
    scanf("%d",&num);
	ptr=link;
	while(ptr->info!=num){
        ptr=ptr->next;
        count++;
        //temp=ptr->next;            
	}
    //To check how to find if node not present
    if(temp==NULL){
       printf("The value is not present in the list\n");
    }
    else{
        printf("Node is present at %d\n",count);
    }
	printf("\n");
	return link;
}


main(){
	node *new;
    create(new);
}	       	