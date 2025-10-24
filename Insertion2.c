// linklist in the middel 

# include <stdio.h>
# include <stdlib.h>
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

struct node* insertAtIndex(struct node* head, int data, int index){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    int i = 0;
    while(i != index - 1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
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

// inserting at the index 1
    head = insertAtIndex(head, 56, 1);
    printf("Linked list after insertion\n");

    linkedListTraversal(head);
    return 0;
}