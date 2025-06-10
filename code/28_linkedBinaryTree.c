#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *creatNode(int data)
{
    struct Node *n;                                 // Creating a node pointer
    n = (struct Node *)malloc(sizeof(struct Node)); // Allocating memory in the heap
    n->data = data;                                 // Selecting the data
    n->left = NULL;                                 // Setting the left and right childern to NULL
    n->right = NULL;                                // Setting the left and right childern to NULL

    return n; // Finally returning the created node
}

int main()
{
    /*

    // Construncting the root node
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Construncting the second node
    struct Node *p1;
    p1 = (struct Node *)malloc(sizeof(struct Node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing third node
    struct Node *p2;
    p2 = (struct Node *)malloc(sizeof(struct Node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    */

    // Constructing the root node using function
    struct Node *p = creatNode(2);
    struct Node *p1 = creatNode(1);
    struct Node *p2 = creatNode(4);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;

    return 0;
}