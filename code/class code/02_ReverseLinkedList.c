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

void reverse()
{
    struct Node *prevNode, *currentNode, *nextNode;
    prevNode = NULL;
    currentNode = nextNode = head;
    while (nextNode != NULL)
    {
        nextNode = nextNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;
}

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
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

    reverse();
    printf("Linked List After Reversing:\n");
    LinkedListTraversal(head); 

    return 0;
}