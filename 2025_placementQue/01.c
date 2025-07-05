// 1. Find sum indices:

#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sumIndices(int *nums, int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target) 
            {
                printf("Sum at %d and %d == %d \n", i, j, target);
                return;
            }
            
        }
    }
    printf("Not found");
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    sumIndices(nums, 9, 4);
    printf("Array: ");
    display(nums, 4);

    int nums2[] = {3, 2, 4};
    sumIndices(nums2, 6, 3);
    printf("Array: "); 
    display(nums2, 3);
    return 0;
}