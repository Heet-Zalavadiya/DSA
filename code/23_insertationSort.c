#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertationSort(int *a, int n)
{
    int key, j;
    // loop for passes
    for (int i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        // loop for each pass
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    // 0  1   2   3   4  5
    // 7, 9, 12, 23, 54, 65
    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n);
    insertationSort(a, n);
    printArray(a, n);
    return 0;
}