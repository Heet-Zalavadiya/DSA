#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a; // Pointer p holds the address of variable a
    int *ptr = NULL; // Pointer ptr is initialized to NULL
    printf("address of pointer p: %d\n", (unsigned int)&p);
    printf("value of a is %d\n", *p); // Dereferencing pointer p to get the value of a
    printf("value of null pointer ptr: %d\n", ptr);
    return 0;
}