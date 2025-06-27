#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;
struct Node *first;
struct Node *second;
struct Node *third;
struct Node *last;

void LinkedListTraversal()
{
    struct Node *ptr = first;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != first);
}

void circularHeadInsertFirst(int x)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = x;
    new->next = head->next;
    head->next = new;
}

void circularHeadInsertLast(int x)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = x;
    new->next = head;
    last->next = new;
    last = new;
}

void circularHeadInsertAfterP(int x, struct Node *p)
{
    struct Node * new = (struct Node *)malloc(sizeof(struct Node));
    new->data = x;
    new->next = p->next;
    p->next = new;
    if (p == last)
    {
        last = new;
    }
}

int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));

    head->data = 0; // Head node data can be anything, often used as a placeholder
    head->next = first;

    first->data = 4;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = last;

    last->data = 1;
    last->next = head;
    circularHeadInsertAfterP(12, third);
    LinkedListTraversal();

    return 0;
}