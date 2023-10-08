//IMPLEMENTATION Of double link list.
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    struct node* next;
    struct node* prev;
    int info;
}node;

node* start=NULL;
void create(){
    int index,item,n;
    node *new,*temp;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid Input");
    }
    else{
        temp=(node*)malloc(sizeof(node));
        printf("Node 1-: ");
        scanf("%d",&temp->info);
        start=temp;
        for(index=2;index<=n;index++){
            new=(node*)malloc(sizeof(node));
            printf("Node %d-: ",index);
            scanf("%d",&item);
            new->info=item;
            new->next=NULL;
            temp->next=new;
            new->prev=temp;
            temp=new;
        }
    }
}

void display(){
    node *temp,*ptr;
    if(start==NULL){
        printf("List is empty");
    }
    else{
        temp=start;
        printf("Value in the List-:\n");
        while(temp!=NULL){
            printf("%d ",temp->info);
            ptr=temp;
            temp=temp->next;
        }
        printf("\nValue in reverse order-:\n");
        temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        while(temp!=NULL){
            printf("%d ",temp->info);
            temp=temp->prev;

        }
        // while(ptr!=NULL){
        //     printf("%d ",ptr->info);
        //     ptr=ptr->prev;
        // }
    }
}

void insert_begin(){
    node *new,*temp;
    if(start==NULL){
        printf("List is empty");
    }
    else{
        temp=start;
        new=(node*)malloc(sizeof(node));
        printf("Enter the value to insert-: ");
        scanf("%d",&new->info);
        new->next=start;
        new->prev=NULL;
        temp->prev=new;
        start=new;
    }
}

void insert_end(){
    node *new,*temp;
    if(start==NULL){
        printf("List is empty");
    }
    else{
        temp=start;
        new=(node*)malloc(sizeof(node));
        printf("Enter the value to insert-: ");
        scanf("%d",&new->info);
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new;
        new->prev=temp;
        new->next=NULL;
    }
}

void insert_pos(){
    node *new, *temp, *ptr;
    int pos, i;
    printf("Enter the position where you want to insert: ");
    scanf("%d", &pos);
    if(start==NULL){
        printf("List is empty!!");
    }
    else{
        if(pos==1){
            insert_begin();
        }
        else{
            temp = start;
            for(i=1; i<pos-1; i++){
                temp = temp->next;
            }
            new = (node*)malloc(sizeof(node));
            printf("Enter the value to insert: ");
            scanf("%d", &new->info);
            new->next = NULL;
            new->prev = NULL;

            ptr = temp->next;  // Assign the next node to ptr

            new->prev = temp;
            new->next = ptr;
            if(ptr != NULL){
                ptr->prev = new;
            }
            temp->next = new;
        }
    }
}

void insert_after_node(){
    node *new, *temp, *ptr, *temp1;
    int value;
    printf("Enter the value of the node after which you want to insert: ");
    scanf("%d", &value);

    new = (node*)malloc(sizeof(node));
    printf("Enter the value to insert: ");
    scanf("%d", &new->info);
    new->next = NULL;
    new->prev = NULL;

    if(start == NULL){
        printf("List is empty");
    }
    else{
        temp = start;
        while(temp != NULL && temp->info != value){
            temp = temp->next;
        }
        if(temp == NULL){
            printf("Node with the specified value not found.");
            return;
        }
        ptr = temp->next;
        if(ptr != NULL){
            ptr->prev = new;
        }
        new->next = ptr;
        new->prev = temp;
        temp->next = new;
    }
}

void delete_begin(){
    node *temp,*ptr;
    if(start==NULL){
        printf("List is empty");
    }
    else{
        temp=start;
        ptr=temp->next;
        ptr->prev=NULL;
        start=ptr;
        free(temp);
    }
}

void delete_end(){
    node *temp, *ptr;
    if(start==NULL){
        printf("List is empty!!");
    }
    else{
        temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        ptr=temp->prev;
        ptr->next=NULL;
        free(temp);        
    }
}

void delete_from_pos(){
    node *temp, *ptr, *temp1;
    int pos, i;
    printf("Enter the position from which you want to delete: ");
    scanf("%d", &pos);
    if(start==NULL){
        printf("List is empty");
    }
    else{
        temp = start;
        for(i=1; i<pos-1; i++){
            temp = temp->next;
        }
        ptr = temp->next;
        temp1 = ptr->next;
        if(temp1 != NULL){
            temp1->prev = temp;
        }
        temp->next = temp1;
        free(ptr);  
    }
}

void delete_after_node(){
    node *ptr,*ptr1,*ptr2;
    int value;
    printf("\nEnter node details: ");
    scanf("%d",&value);
    ptr = start;
    while(ptr != NULL && ptr->info != value){
        ptr = ptr->next;
    }
    if(ptr == NULL || ptr->next == NULL){
        printf("\nNode is Absent");
    }
    else if((ptr->next)->next == NULL){
        delete_end();
    }
    else{
        ptr1 = ptr->next;
        ptr2 = ptr1->next;
        printf("\nDeleted element: %d",ptr1->info);
        ptr->next = ptr2;
        ptr2->prev = ptr;
    }
}

main(){
    int ch;
    while(1){
        printf("\n0.CREATE A DOUBLE LINK LIST\n1.DISPLAY DOUBLE LINK\n2.EXIT\n3.INSERT AT BEGINNING\n4.INSERT AT THE END\n5.INSERT AT A GIVEN POSITION\n6.INSERT AFTER A GIVEN NODE\n7.DELETE FROM THE BEGINNING\n8.DELETE FROM END\n9.DELETE FROM A GIVEN POSITION\n10.DELETE AFTER A GIVEN NODE\nEnter your choice-:\n");
        scanf("%d",&ch);
        switch(ch){
            case 0:
            create();
            break;
            case 1:
            display();
            break;
            case 2:
            printf("EXITING...");
            exit(0);
            break;
            case 3:
            insert_begin();
            break;
            case 4:
            insert_end();
            break;
            case 5:
            insert_pos();
            break;
            case 6:
            insert_after_node();
            break;
            case 7:
            delete_begin();
            break;
            case 8:
            delete_end();
            break;
            case 9:
            delete_from_pos();
            break;
            case 10:
            delete_after_node();
            break;
        }
    }
}