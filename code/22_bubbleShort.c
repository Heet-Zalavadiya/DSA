#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSort(int *a, int n)
{
    int isShorted = 0;
    for (int i = 0; i < n - 1; i++) // for number of passes
    {
        printf("Working on pass number %d\n", i + 1);
        isShorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // for comparision of each pass
        {

            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isShorted = 0;
            }
        }
        if (isShorted)
        {
            return;
        }
    }
}

int main()
{
    int a[] = {12, 54, 65, 7, 23, 9};
    // int a[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printArray(a, n); // printing the array before sorting
    bubbleSort(a, n); // function to sort the array
    printArray(a, n); // printing the array after sorting
    return 0;
}
