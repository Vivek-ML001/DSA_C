// inserting an element in linked list in the beginning
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    printf("Linked list after inserting elements at the beginning:\n");
    printList(head);

    return 0;
}




// inserting an element in linked list in the end
#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end
void insertAtEnd(struct Node** head_ref, int new_data) {
    // Step 1: Allocate new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head_ref; // temporary pointer to traverse list

    // Step 2: Assign data and set next as NULL
    new_node->data = new_data;
    new_node->next = NULL;

    // Step 3: If the list is empty, new node becomes head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // Step 4: Otherwise, traverse to the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Step 5: Link last node’s next to the new node
    temp->next = new_node;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL; // Empty list

    // Insert elements at the end
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    printf("Linked list after inserting at the end:\n");
    printList(head);

    return 0;
}



// inserting an element in linked list at any position
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insertAtPosition(struct Node** head, int newData, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;

    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("The previous node is null. Insertion not possible.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;

    insertAtPosition(&head, 10, 0); // Insert 10 at position 0
    insertAtPosition(&head, 20, 1); // Insert 20 at position 1
    insertAtPosition(&head, 30, 1); // Insert 30 at position 1
    insertAtPosition(&head, 40, 2); // Insert 40 at position 2

    printf("Linked list after inserting elements at specific positions:\n");
    printList(head);

    return 0;
}


