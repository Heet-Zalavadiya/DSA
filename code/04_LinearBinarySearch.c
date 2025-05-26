#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int mid;
    int low = 0;
    int high = size - 1;

    //keep searching until low and high converges
    while (low <= high)
    {
        // Searching starts
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        // Searching ends
    }
    return -1;
}

int main()
{
    // unsorted array for linear search
    //  int arr[] = {1, 3, 5, 56, 89, 54, 101, 0, 484, 110, 10, 56, 1, 13, 20, 10, 100};
    //  int size = sizeof(arr) / sizeof(int);

    // sorted array for binary search
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 25, 28, 92, 102, 130, 157, 178};
    int size = sizeof(arr) / sizeof(int);
    int element = 157;
    // int searchIndex = linearSearch(arr, size, element);
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}