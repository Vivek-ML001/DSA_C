
// we are add the elemnt at the end of the array


#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

void linkedListTraversal(struct node* ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node* insertAtEnd(struct node* head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;

    if (head == NULL) {
        return ptr; // If the list is empty, return the new node as the head
    }

    struct node* p = head;
    while (p->next != NULL) {
        p = p->next; // Traverse to the last node
    }
    p->next = ptr; // Link the last node to the new node
    return head;
}


int main() {
    struct node* head = NULL; // Initialize head to NULL
    struct node* second;
    struct node* third;

    // allocation of memory in heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // linking first and second nodes
    head->data = 7; // assign data in first node
    head->next = second; // Link first node with second

    // linking second and third nodes
    second->data = 11; // assign data in second node
    second->next = third; // Link second node with third

    // terminating the list at the third node
    third->data = 66; // assign data in third node
    third->next = NULL; // Link third node with Null

    printf("Linked list before insertion\n");
    linkedListTraversal(head);

    // inserting at the end
    head = insertAtEnd(head, 56);
    printf("Linked list after insertion\n");

    linkedListTraversal(head);
    return 0;
}