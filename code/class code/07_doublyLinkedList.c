#include <stdio.h>
#include <stdlib.h>

struct Node *l;
struct Node *second;
struct Node *third;
struct Node *r;

struct Node
{
    int data;
    struct Node *lptr;
    struct Node *rptr;
};

void LinkedListTraversal()
{
    struct Node *ptr = l;

    // Traverse forward (next)
    printf("Forward Traversal:\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        if (ptr->rptr == NULL)
            break;
        ptr = ptr->rptr;
    }
    printf("\n");

    // Traverse backward (prev)
    printf("Backward Traversal:\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->lptr;
    }
    printf("\n");
}

void doublyInsertion(int x, struct Node *m)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = x;
    // insert into empty list
    if (r == NULL)
    {
        new->lptr = NULL;
        new->rptr = NULL;
        l = r = new;
        return;
    }

    // left most insertion
    if (m == l)
    {
        new->lptr = NULL;
        new->rptr = m;
        m->lptr = new;
        l = new;
        return;
    }

    // insert in middle of list
    new->lptr = m->lptr;
    new->rptr = m;
    m->lptr = new;
    new->lptr->rptr = new;
}

void doublyDeletion(struct Node *old)
{
    if (r == NULL)
    {
        printf("UnderFLow");
        return;
    }

    if (l == r) // single node in list
    {
        l = r = NULL;
    }
    else if (old == l) // left most node
    {
        l = l->rptr;
        l->lptr = NULL;
    }
    else if (old == r) // right most node
    {
        r = r->lptr;
        r->rptr = NULL;
    }
    else
    {
        old->lptr->rptr = old->rptr;
        old->rptr->lptr = old->lptr;
    }
    free(old);
}
int main()
{
    // Create Nodes
    l = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    r = (struct Node *)malloc(sizeof(struct Node));

    // Link Nodes
    l->data = 1;
    l->rptr = second;
    l->lptr = NULL;

    second->data = 2;
    second->rptr = third;
    second->lptr = l;

    third->data = 3;
    third->rptr = r;
    third->lptr = second;

    r->data = 4;
    r->rptr = NULL;
    r->lptr = third;

    printf("Doubly linked list insertion\n");
    doublyInsertion(12, third);
    LinkedListTraversal();

    printf("Doubly linked list deletion\n");
    doublyDeletion(third);
    LinkedListTraversal();

    return 0;
}