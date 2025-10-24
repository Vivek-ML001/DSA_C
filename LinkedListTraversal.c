#include<stdio.h>

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

int main() {
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    
    

    // allocation of memory in heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));


    // linking first and second nodes
    head->data = 7; // assign data in first node
    head->next = second; // Link first node with second


    // linking second and third nodes
    second->data = 11; // assign data in second node
    second->next = third; // Link second node with third

    // linking third and fourth nodes
    third->data = 66; // assign data in fourth node
    third->next = fourth; // Link third node with fourth

    //terminating the list at the fourth node
    fourth->data = 99; // assign data in third node
    fourth->next = NULL; // Link third node with Null


    linkedListTraversal(head);
    return 0;
}

