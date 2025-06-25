#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

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

void insertAtFirst(int x)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = x;
    if (first == NULL)
    {
        new->next = new;
        first = last = new;
    }
    else
    {
        new->next = first;
        last->next = new;
        first = new;
    }
    return;
}

void insertAtLast(int x)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = x;
    if (first == NULL)
    {
        new->next = new;
        first = last = new;
    }
    else
    {
        new->next = first;
        last->next = new;
        last = new;
    }
    return;
}

void insertIntoOrder(int x)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = x;
    if (first == NULL)
    {
        new->next = new;
        first = last = new;
        return;
    }
    if (new->data <= first->data) // if new node precedes all other nodes
    {
        new->next = first;
        last->next = new;
        first = new;
        return;
    }

    struct Node *save = first;
    while (save->next != first && new->data > save->next->data)
    {
        save = save->next;
    }
    new->next = save->next;
    save->next = new;
    if (save == last)
    {
        last = new;
    }
    return;
}

void delete(struct Node *x)
{
    if (first == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *save = first;
    struct Node *pred;

    while (save != x && save != last)
    {
        pred = save;
        save = save->next;
    }
    if (save != x)
    {
        printf("Not found");
        return;
    }
    if (first == last) // Only one node in the list
    {
        first = last = NULL;
        free(x);
    }

    else if (x == first) // If the node to be deleted is the first node
    {
        first = first->next;
        last->next = first;
    }
    else
    {
        pred->next = x->next;
        if (last == x)
        {
            last = pred;
        }
    }
    free(x);
}

int main()
{
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    last = (struct Node *)malloc(sizeof(struct Node));

    first->data = 4;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = last;

    last->data = 1;
    last->next = first;

    printf("Circular Linked List before insertation\n");
    LinkedListTraversal();

    printf("\nCircular Linked List after insertation\n");
    insertAtFirst(10);
    insertAtLast(20);
    insertIntoOrder(5);
    delete(third);
    LinkedListTraversal();
    return 0;
}