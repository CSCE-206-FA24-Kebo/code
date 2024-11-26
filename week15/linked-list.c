#include <stdio.h>
#include <stdlib.h>

// Define the structure for each node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at the beginning of the list
struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;
    return newNode;
}

// Function to insert at the end of the list
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    
    if (head == NULL) {
        return newNode;
    }
    
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Function to search for a value in the list
struct Node* search(struct Node* head, int value) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// Function to delete a node with a given value
struct Node* deleteNode(struct Node* head, int value) {
    if (head == NULL) {
        return NULL;
    }
    
    // If head node itself holds the value to be deleted
    if (head->data == value) {
        struct Node* temp = head->next;
        free(head);
        return temp;
    }
    
    // Search for the node to be deleted
    struct Node* current = head;
    while (current->next != NULL && current->next->data != value) {
        current = current->next;
    }
    
    // If value was not present in linked list
    if (current->next == NULL) {
        return head;
    }
    
    // Unlink the node from linked list
    struct Node* temp = current->next;
    current->next = temp->next;
    free(temp);
    
    return head;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    printf("List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to free the entire linked list
void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;
    int choice, value;
    
    do {
        printf("\nLinked List Operations:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Search for a value\n");
        printf("4. Delete a value\n");
        printf("5. Print list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                head = insertAtBeginning(head, value);
                printf("Inserted %d at beginning\n", value);
                break;
                
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                printf("Inserted %d at end\n", value);
                break;
                
            case 3:
                printf("Enter value to search: ");
                scanf("%d", &value);
                struct Node* result = search(head, value);
                if (result != NULL) {
                    printf("Value %d found in the list\n", value);
                } else {
                    printf("Value %d not found in the list\n", value);
                }
                break;
                
            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                head = deleteNode(head, value);
                printf("Deleted %d if it existed\n", value);
                break;
                
            case 5:
                printList(head);
                break;
                
            case 6:
                printf("Exiting program\n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);
    
    // Free the allocated memory before exiting
    freeList(head);
    
    return 0;
}