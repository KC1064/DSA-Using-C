// Linear Queue using linked-list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
int front = -1,rear = -1,size;

void insert(){
    struct node *temp,*ptr;
    if(rear == size-1)
    {
        printf("\nQUEUE OVERFLOW!!!");
    }
    else
    {
        if(rear == -1)
        {
            front++;
            rear++;
        }
        else{
            rear++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter value to be inserted: ");
        scanf("%d",&temp->info);
        temp->next = NULL;
        if(start == NULL){
            start = temp;
        }
        else{
            ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }
}

void delete1(){
    struct node *ptr,*ptr1;
    if(front == rear+1){
        printf("\nQUEUE UNDERFLOW!!!");
    }
    else{
        front++;
        ptr = start;
        printf("\nDeleted value: %d",ptr->info);
        ptr1 = ptr->next;
        if(ptr1 == NULL){
            start = NULL;
            free(ptr);
        }
        else{
            start = ptr1;
            free(ptr);
        }
    }
}

void display(){
    struct node *ptr;
    if(front == rear+1){
        printf("\nQUEUE UNDERFLOW!!!");
    }
    else{
        printf("\nQUEUE:\n");
        ptr = start;
        while(ptr != NULL){
            printf("%d\t",ptr->info);
            ptr = ptr->next;
        }
    }
}

main()
{
    int choice;
    printf("\nEnter size of Queue: ");
    scanf("%d",&size);
    while(1)
    {
        printf("\n\n1.INSERT INTO QUEUE");
        printf("\n2.DELETE FROM QUEUE");
        printf("\n3.DISPLAY QUEUE");
        printf("\n4.EXIT");
        printf("\nEnter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete1();
                break;
            case 3:
                display();
                break;
            case 4:
            printf("EXITING....");
                exit(0);
                break;
        }
    }
}
