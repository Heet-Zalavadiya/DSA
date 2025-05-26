#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i)
{
    int arrInd = sp->top - i + 1;
    if (arrInd < 0)
    {
        printf("Not a valid position for stack\n");
        return -1;
    }
    else
    {
        return sp->arr[arrInd];
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created sucessfully\n");

    printf("Before pushing, Full :%d\n", isFull(sp));
    printf("Before pushing, Empty :%d\n", isEmpty(sp));

    push(sp, 26);
    push(sp, 76);
    push(sp, 96);
    push(sp, 6);
    push(sp, 16);
    push(sp, 10);
    push(sp, 36);
    push(sp, 46);
    push(sp, 76);
    push(sp, 86); // --> Pushed 10 values
    // push(sp, 4);  // Stack Overflow since the size of this stack is 10
    printf("After pushing, Full :%d\n", isFull(sp));
    printf("After pushing, Empty :%d\n", isEmpty(sp));

    printf("Popped %d from stack\n", pop(sp)); // ---> Last in First Out !
    printf("Popped %d from stack\n", pop(sp)); // ---> Last in First Out !
    printf("Popped %d from stack\n", pop(sp)); // ---> Last in First Out !
 
    // Printing value from the stack
    for (int i = 1; i <= sp->top + 1; i++)
    {
        printf("The value at position %d is %d \n", i, peek(sp, i));
    }

    return 0;
}