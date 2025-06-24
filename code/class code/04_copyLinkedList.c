#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node
{
    int info;
    struct Node *link;
};

// Global pointers for demonstration
struct Node *head;
struct Node *second;
struct Node *third;

// Function to traverse and print the linked list
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->info);
        ptr = ptr->link;
    }
}

// Function to create a copy of the linked list
struct Node *copy(struct Node *head)
{
    struct Node *new;
    struct Node *begin;
    struct Node *save;
    struct Node *pred;

    if (head == NULL)
    {
        // If the original list is empty, return NULL
        return NULL;
    }

    // Allocate memory for the first node of the new list
    new = (struct Node *)malloc(sizeof(struct Node));
    if (new == NULL)
    {
        printf("Underflow");
        return NULL;
    }

    new->info = head->info; // Copy data from the first node 
    begin = new;            // Save the start of the new list

    save = head;            // Pointer to traverse the original list

    // Copy the rest of the nodes
    while (save->link != NULL)
    {
        pred = new;         // Keep track of the previous node in the new list
        save = save->link;  // Move to the next node in the original list

        // Allocate memory for the new node
        new = (struct Node *)malloc(sizeof(struct Node));
        if (new == NULL)
        {
            printf("Underflow\n");
            return NULL;
        }
        new->info = save->info; // Copy data
        pred->link = new;       // Link the previous node to the new node
    }
    new->link = NULL;           // Terminate the new list
    return begin;               // Return the head of the copied list
}

int main()
{
    // Allocate memory for three nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->info = 7;
    head->link = second;

    // Link second and third nodes
    second->info = 11;
    second->link = third;

    // Terminate the list at third node
    third->info = 66;
    third->link = NULL;

    printf("Original Linked List:\n");
    LinkedListTraversal(head);

    // Copy the linked list
    struct Node *copiedList = copy(head);
    if (copiedList != NULL)
    {
        printf("Copied Linked List:\n");
        LinkedListTraversal(copiedList);
    }
    else
    {
        printf("Failed to copy the linked list.\n");
    }

    return 0;
}