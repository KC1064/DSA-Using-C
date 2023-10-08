//Implementation of circular link list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node *next;
}node;

node *start=NULL;

void create(){
    node *temp,*new;
    int size,index;
    printf("Enter the size of node-:");
    scanf("%d",&size);
    temp=(node *)malloc(sizeof(node));
    printf("Node 1-: ");
    scanf("%d",&temp->info);
    start=temp;
    temp->next=start;
    for(index=2;index<=size;index++){
        new=(node *)malloc(sizeof(node));
        printf("Node %d-: ",index);
        scanf("%d",&new->info);
        temp->next=new;
        new->next=start;
        temp=temp->next;
    }    
}

void display(){
    node *temp;
    if(start==NULL){
        printf("List is empty");
    }
    else{
        temp=start;
        printf("\n----LIST----\n");
        do{
            printf("%d\t",temp->info);
            temp=temp->next;
        }while(temp!=start);
    }
}

void insert_after_node(){
	node *temp,*new, *ptr, *ptr1;
	int value;
	printf("Enter the value after which you want to insert-: ");
	scanf("%d",&value);
	new=(node*)malloc(sizeof(node));
	printf("Enter the value to insert-: ");
	scanf("%d",&new->info);
	new->next=NULL;
	temp=start;
	while(temp->info!=value && temp->next!=start){
		temp=temp->next;
	}
	if(temp==start){
	 	printf("Node is not present");
	}
	else{
		ptr=temp->next;
		temp->next=new;
		new->next=ptr;
	}
}

void delete_spec_node(){
	node *temp,*ptr;
	int value;
	printf("Enter the value to delete-: ");
	scanf("%d",&value);
	temp=start;
	while(temp->info!=value && temp->next!=start){
		ptr=temp;
		temp=temp->next;
	}
	ptr->next=temp->next;
	free(temp);
}

main(){
    int opt;
    while(1){
        printf("\n0.CREATE\n1.DISPLAY\n2.EXIT\n3.INSERT AFTER A GIVEN NODE\n4.DELETE FROM SPECIFIC NODE\n");
        printf("Enter your choice-:");
        scanf("%d",&opt);
        switch(opt){
            case 0:create();
            break;
            case 1: display();
            break;
            case 2: printf("EXITING...");
            exit(0);
            break;
	    case 3: insert_after_node();
		    break;
	    case 4:
		    delete_spec_node();
		    break;
        }
    }
}
