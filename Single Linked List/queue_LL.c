// Linear Queue using linked-list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *front = NULL, *rear = NULL;

void insert(){
    struct node *temp, *ptr;
        temp = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter value to be inserted: ");
        scanf("%d",&temp->info);
        temp->next = NULL;
    	if(rear == NULL)
	{
    		front = rear = temp;
	}
	else{
		ptr->next = rear;
		rear = temp;
	}
}
void delete1(){
    struct node *ptr;
    if(front == NULL){
        printf("\nQUEUE UNDERFLOW!!!");
    }
    else{
        ptr = front;
        printf("\nDeleted value: %d",ptr->info);
        front = front->next;
	free(ptr);
        }
}

void display(){
    struct node *ptr;
    if(front == NULL){
        printf("\nQUEUE UNDERFLOW!!!");
    }
    else{
        printf("\nQUEUE:\n");
        ptr = front;
        while(ptr != rear){
            printf("%d\t",ptr->info);
            ptr = ptr->next;
        }
        //printf("%d\t",ptr->info);
    }
}

main()
{
    int choice,size;
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
