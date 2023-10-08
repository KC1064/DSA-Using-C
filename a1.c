#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of a linked list
struct Node* push(struct Node* head, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    return new_node;
}

// Function to print the linked list
void printList(struct Node* node)
{
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Function to merge two sorted linked lists
struct Node* mergeLists(struct Node* list1, struct Node* list2)
{
    struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;

    while (list1 && list2) {
        if (list1->data <= list2->data) {
            tail->next = list1;
            list1 = list1->next;
        }
        else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    if (list1)
        tail->next = list1;
    else
        tail->next = list2;

    return dummy.next;
}

// Function to sort the linked list using bubble sort
void bubbleSort(struct Node* start)
{
    int swapped, i;
    struct Node* ptr1;
    struct Node* lptr = NULL;

    // Checking for empty list
    if (start == NULL)
        return;

    do {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

int main()
{
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    int n1, n2, data;

    printf("Enter the number of elements in the first linked list: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first linked list: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &data);
        head1 = push(head1, data);
    }

    printf("Enter the number of elements in the second linked list: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second linked list: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &data);
        head2 = push(head2, data);
    }

    printf("First Linked List: ");
    printList(head1);
    printf("Second Linked List: ");
    printList(head2);

    // Sort the individual lists
    bubbleSort(head1);
    bubbleSort(head2);

    printf("Sorted First Linked List: ");
    printList(head1);
    printf("Sorted Second Linked List: ");
    printList(head2);

    // Merge the sorted lists
    struct Node* mergedList = mergeLists(head1, head2);

    printf("Merged and Sorted List: ");
    printList(mergedList);

    // Sort the merged list
    bubbleSort(mergedList);

    printf("Sorted Merged List: ");
    printList(mergedList);

    return 0;
}
