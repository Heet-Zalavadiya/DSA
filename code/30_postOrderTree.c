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

void postOrder(struct Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct Node *p = creatNode(4);
    struct Node *p1 = creatNode(1);
    struct Node *p2 = creatNode(6);
    struct Node *p3 = creatNode(5);
    struct Node *p4 = creatNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    postOrder(p);
    return 0;
}