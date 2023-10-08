#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node* next;
};

struct Node* create(struct Node* start, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->next = NULL;

    if (start == NULL) {
        start = newNode;
    } else {
        struct Node* temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return start;
}

void swap(struct Node* a, struct Node* b) {
    int temp;
    temp= a->info;
    a->info = b->info;
    b->info = temp;
}

void bubbleSort(struct Node* start) {
    int swapped;
    struct Node* ptr1;
    struct Node* temp = NULL;

    if (start == NULL)
        return;

    do {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != temp) {
            if (ptr1->info > ptr1->next->info) {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        temp = ptr1;
    } while (swapped);
}


void display(struct Node* start) {
    struct Node* temp = start;
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->next;
    }
    printf("\n");
}


main() {
    struct Node* start = NULL;
    int value, numNodes;
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);
    printf("Enter the data for each node:\n");
    for (int i = 0; i < numNodes; i++) {
        printf("Node %d: ", i + 1);
        scanf("%d", &value);
        start= create(start, value);
    }
    printf("Linked List before sorting:\n");
    display(start);
    bubbleSort(start);
    printf("Linked List after sorting:\n");
    display(start);
}
