#include <stdio.h>
#include <stdlib.h>

// Node structure for stack
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to push an element onto the stack
Node* push(Node* top, int value) {
    Node* newNode = createNode(value);
    newNode->next = top;
    top = newNode;
    printf("Pushed %d onto the stack\n", value);
    return top;
}

// Function to pop an element from the stack
Node* pop(Node* top, int* poppedValue) {
    if (top == NULL) {
        printf("Stack is empty\n");
        exit(1);
    }
    Node* temp = top;
    *poppedValue = temp->data;
    top = temp->next;
    free(temp);
    return top;
}

// Function to check if the stack is empty
int isEmpty(Node* top) {
    return top == NULL;
}

// Function to get the top element of the stack
int peek(Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        exit(1);
    }
    return top->data;
}

// Function to display the stack
void display(Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Node* top = NULL;
    int choice, value;

    while (1) {
        printf("Stack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                top = push(top, value);
                break;
            case 2:
                if (!isEmpty(top)) {
                    int poppedValue;
                    top = pop(top, &poppedValue);
                    printf("Popped value: %d\n", poppedValue);
                }
                break;
            case 3:
                if (!isEmpty(top)) {
                    printf("Top of stack: %d\n", peek(top));
                }
                break;
            case 4:
                display(top);
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
        printf("\n");
    }

    return 0;
}
