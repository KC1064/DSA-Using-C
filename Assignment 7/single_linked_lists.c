//Implementation of menu driven program for operations in linked lists.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int info;
	struct node*next;
}node;
node*start=NULL;
void create(node *new){
	int ch;
	  printf("Enter values-: ");
	scanf("%d",&new->info);
	new->next=NULL;
	start = new;
	printf("Enter 1 to continue and 0 to exit-: ");
	scanf("%d", &ch);
	while(ch != 0){
		new -> next = (node*)malloc(sizeof(node));
		if(new == NULL)
		{
			printf("Message ");
			exit(0);
		}
		else
		{
			new = new -> next;
			printf("Enter values-: ");
			scanf("%d",&new->info);
			new->next=NULL;
			printf("Enter 1 to continue and 0 to exit-: ");
			scanf("%d", &ch);
		}
	}
}
void display(node *link){
	if(link==NULL){
		printf("List is empty");
	}
	else{
		link = start;
        printf("\n");
        printf("LINKED LIST-:\n");
		while(link!=NULL){
			printf("%d\t",link->info);
			link=link->next;
			
		}
		printf("\n");
	}
}

node* insert_at_begin(node *link){
	node*new;
	new=(node*)malloc(sizeof(node));
	printf("Enter the value-:");
	scanf("%d",&new -> info);
	new->next=link;
	start=new;
	return start;
}

node* insert_at_end(node *link){
	node*new;
	new=(node*)malloc(sizeof(node));
	printf("Enter the value:");
	scanf("%d",&new->info);
	new->next=NULL;
	while(link->next!=NULL){
		link=link -> next;
	}
	link->next=new;
}

void insert_specific(node *link) {
    int pos;
    node *newNode;
    int count = 1;

    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos == 1) {
        insert_at_begin(link);
    } 
    else {
        newNode = (node *)malloc(sizeof(node));
        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            return;
        }

        printf("Enter the value: ");
        scanf("%d", &(newNode->info));

        while (count < pos - 1 && link != NULL) {
            link = link->next;
            count++;
        }

        if (link == NULL) {
            printf("Position is not available\n");
            free(newNode); // Free the allocated memory
            return;
        }

        newNode->next = link->next;
        link->next = newNode;
    }
}


void insert_after_node(node *link){
    node *new;
    int value;
    new = (node*)malloc(sizeof(node));
    printf("Enter the value-:");
    scanf("%d",&new -> info);
    printf("Enter the value after which you want to insert-:");
    scanf("%d",&value);
    while(link!=NULL && link-> info != value){
            link=link->next;
    }
    if(link == NULL){
        printf("Node is not present");
    }
    else{
        new->next=link->next;
        link->next=new;
    }
}

void delete_beginning(node *link){
    if(link==NULL){
        printf("List is empty");
    }
    else{
        link=start;
        start=start->next;
        free(link);
    }
}

void delete_from_end(node* link) {
	if (link == NULL) {
		printf("List is empty");
	} else if (link->next == NULL) {
		// Only one node in the list
		free(link);
		start = NULL;
	} else {
		node* prev = NULL;
		while (link->next != NULL) {
			prev = link;
			link = link->next;
		}
		prev->next = NULL;
		free(link);
	}
}

void delete_after_specific_node(node *link){
    if(start==NULL){
        printf("List is empty");
    }
    else{
        int value;
        printf("Enter the value after which you want to delete-:");
        scanf("%d",&value);
        while(link!=NULL && link->info!=value){
            link=link->next;
        }
        if(link==NULL){
            printf("Node is present");
        }
        else{
            node* prev=NULL;
            prev=link->next;
            link->next= prev ->next;
            free(prev);
        }
        
    }
}
//To check the above code if applicable for single node
void delete_from_specific_location(node* link){
    if(start==NULL){
        printf("List is empty");
    }
    else{
        int pos;
        node* ptr=NULL;
        printf("Enter the postition from where you want to delete:\n");
        scanf("%d",&pos);
        int count=1;
        if(pos==1){
            delete_beginning(link);
        }
        else{
            while(link!=NULL && count!=pos){
                ptr=link;
                link=link->next;
                count++;
            }
            if(link==NULL){
                printf("Node is present");
            }
            else{
                ptr->next=link->next;
                free(link);
        }
        }
        }
}
void reverse_list(node* link){
    if(start==NULL && start->next==NULL){
        //LIST IS EITHER EMPTY OR HAVE ONLY ONE NODE
        return;
    }
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

}


main(){
	int opt;
	node *new;
	new=(node*)malloc(sizeof(node));
	create(new);
	while(1){
    printf("----------------------------------");
	printf("\n1.DISPLAY\n2.EXIT\n3.INSERT AT BEGIN\n4.INSERT AT END\n5.INSERT AT A SPECIFIC POSITION\n6.INSERT AFTER A GIVEN NODE\n7.DELETE FROM BEGINNING\n8.DELETE FROM END\n9.DELTE AFTER A GIVEN NODE\n10.DELETE FROM A SPECIFIC LOCATION\n");
	printf("----------------------------------");
    printf("\nENTER THE CHOICE-:\n");
	scanf("%d",&opt);
	switch(opt){
		case 1:
			display(new);
			break;
		case 2:
			printf("EXITING...");
			exit(0);
		case 3:
			start = insert_at_begin(new);
			break;
		case 4:
			insert_at_end(new);
			break;
		case 5:
			insert_specific(new);
			break;
        case 6:
            insert_after_node(new);
            break;
        case 7:
            delete_beginning(new);
            break;
        case 8:
            delete_from_end(new);
            break;
        case 9:
            delete_after_specific_node(new);
            break;
        case 10:
            delete_from_specific_location(new);
            break;
        case 11:
            reverse_list(new);
            break;
		}
	}
}