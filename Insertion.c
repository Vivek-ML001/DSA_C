// inserting an element in an array at a specific position

// that are mailnly  in three ways 
// 1. in the begning 
// 2. in the end
// 3. in the middle
// 4. after a node




#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void linkedListTraversal(struct node *ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}


struct node* insertAtFirst(struct node* head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main() {
    struct node* head;
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



// inserting at the beginning 
    head = insertAtFirst(head, 56);
    printf("Linked list after insertion\n");

    linkedListTraversal(head);
    return 0;
}


