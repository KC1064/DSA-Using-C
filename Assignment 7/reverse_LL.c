//Implementation of reversing a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
}node;
node* start=NULL;
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

void reverse(node *link){
	if(start==NULL && start->next==NULL){
		//LIST IS EITHER EMPTY OR HAVE ONLY ONE NODE
	        return;
	    }
	else{
		start=link;
	    	node* prev=NULL;
            	node* current=start;
	    	node* forward=NULL;
	    	while(current!=NULL){
		    	forward=current->next;
		    	current->next=prev;
		    	prev=current;
		    	current=forward;
            }
		start=prev;
		printf("-----LINKED LIST------\n");
		while(start!=NULL){
		               printf("%d ",start->info);
		               start=start->next;
		}
	}

}



main(){
	node *new;
	new=(node*)malloc(sizeof(node));
	create(new);
	reverse(new);
}
