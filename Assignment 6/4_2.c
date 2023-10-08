//WAP to implement queue using two stacks
#include <stdio.h>
#include <stdlib.h>

#define max 100

int stack1[max], stack2[max];
int top1 = -1, top2 = -1;

void push(int stack[], int value, int size);
int pop(int stack[], int size);
int is_empty(int size);
void enqueue(int value);
int dequeue();
void display();

void push(int stack[], int value, int size) {
    if (size == max) {
        printf("Stack overflow\n");
        return;
    }
    size++;
    stack[size - 1] = value;
}

int pop(int stack[], int size) {
    if (is_empty(size)) {
        printf("Stack underflow\n");
        exit(1);
    }
    int value = stack[size - 1];
    size--;
    return value;
}


int is_empty(int size) {
    return (size == 0);
}


void enqueue(int value) {
    push(stack1, value, top1 + 1);
    top1++;
}


int dequeue() {
    if (is_empty(top2 + 1)) {
        while (!is_empty(top1 + 1)) {
            int value = pop(stack1, top1 + 1);
            top1--;
            push(stack2, value, top2 + 1);
            top2++;
        }
    }
    if (is_empty(top2 + 1)) {
        printf("Queue underflow\n");
        exit(1);
    }
    int value = pop(stack2, top2 + 1);
    top2--;
    return value;
}

void display() {
	int i;
    printf("Queue: ");
    if (is_empty(top2 + 1)) {
        while (!is_empty(top1 + 1)) {
            int value = pop(stack1, top1 + 1);
            top1--;
            push(stack2, value, top2 + 1);
            top2++;
        }
    }
    for (i=top2;i>=0;i--) {
        printf("%d ", stack2[i]);
    }
    for ( i = 0; i <= top1; i++) {
        printf("%d ", stack1[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    do {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to be enqueued: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                printf("Dequeued value: %d\n", value);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (1);
    return 0;
}

