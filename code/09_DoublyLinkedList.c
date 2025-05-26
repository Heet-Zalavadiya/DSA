#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void LinkedListTraversal(struct Node *n1)
{
    struct Node *ptr = n1;

    // Traverse forward (next)
    printf("Forward Traversal:\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        if (ptr->next == NULL)
            break;
        ptr = ptr->next;
    }
    printf("\n");

    // Traverse backward (prev)
    printf("Backward Traversal:\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->prev;
    }
    printf("\n");
}

int main()
{
    // Create Nodes
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));

    // Link Nodes
    n1->data = 1;
    n1->next = n2;
    n1->prev = NULL;

    n2->data = 2;
    n2->next = n3;
    n2->prev = n1;

    n3->data = 3;
    n3->next = n4;
    n3->prev = n2;

    n4->data = 4;
    n4->next = NULL;
    n4->prev = n3;

    LinkedListTraversal(n1);

    return 0;
}