#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int maximum(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

void countSort(int *a, int n)
{
    int i, j;
    // Find the maximum element in a
    int max = maximum(a, n);

    // Create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // Initialize the array elements to 0
    for (int i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }

    // Increment the corresponding index in the count array
    for (int i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }

    i = 0; // counter for count array
    j = 0; // counter for given array

    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int a[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int n = sizeof(a) / sizeof(a[0]);
    printArray(a, n);
    countSort(a, n);
    printf("Sorted array: \n");
    printArray(a, n);
    return 0;
}