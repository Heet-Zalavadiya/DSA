#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtOrder(struct Node *head, int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    
    // Location is First one
    if (head == NULL || newNode->data <= head->data)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    // Search for Predecessor Node
    struct Node *save;
    save = head;

    while (save->next != NULL && newNode->data >= save->next->data )
    {
        save = save->next;
    }

    newNode->next = save->next;
    save->next = newNode;

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory for nodes in linked list in Heap
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

    printf("normal Linked List\n");
    LinkedListTraversal(head);

    printf("\nLinked List after Node insertation \n");
    head = insertAtOrder(head, 54);
    LinkedListTraversal(head); 

    return 0;
}