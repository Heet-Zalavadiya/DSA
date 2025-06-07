#include <stdio.h>

int main()
{
    // char a = '3';
    // char *ptr = &a;
    // printf("%d\n",(ptr));
    // ptr++;
    // printf("%d\n",(ptr));
    // printf("%d\n",(ptr-2));

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr; // p is a pointer to the first element of the array
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("address :%d\n", arr); // arr is a pointer to the first element of the array
    printf("address :%d\n", &arr[0]);
    printf("address :%d\n", &arr[1]);
    printf("address :%d\n", arr + 1);
    // arr++; Error arr is not a pointer, it is an array name which is a constant pointer to the first element of the array.

    printf("address :%d\n", *(p+1)); // p is a pointer to the second element of the array

    printf("value :%d\n", *p);
    printf("value :%d\n", *(&arr[0]));
    printf("value :%d\n", arr[0]);
    printf("value :%d\n", *arr);
    printf("value :%d\n", *(&arr[1]));
    printf("value :%d\n", *(arr + 1));
    return 0;
}
