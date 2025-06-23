#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;
struct Node *second;
struct Node *third;

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void deleteNode(int x)
{
    // Linked list is empty
    if (head == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }

    struct Node *save = head, *prev = NULL;

    // If first node holds the key 
    if (save->data == x)
    {
        head = save->next;
        free(save);
        return;
    }

    // Search for the key X to delete, keep track of
    // the previous node as we need to change save->link

    while (save != NULL && save->data != x)
    {
        prev = save;
        save = save->next;
    }

    // If key was not present in linked list
    if (save == NULL)
    {
        printf("Node not found\n");
        return;
    }
    
    // Unlink the node from linked list 
    prev->next = save->next;
    free(save);
    return; 
}

int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Terminate the list at third node
    third->data = 66;
    third->next = NULL;
    printf("Linked List Before Deletion:\n");
    LinkedListTraversal(head);

    printf("Linked List After Deletion:\n");
    deleteNode(66);
    LinkedListTraversal(head);

    return 0;
}