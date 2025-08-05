#include <stdio.h>
#include <stdlib.h>

int maximumSum(int *nums, int numsLen, int k)
{
    if (numsLen < k || k <= 0) return 0;
    
    int sum = 0, maxSum = 0;

    // find the sum of first window or k element
    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }

    maxSum = sum;

    // for remaining window element run loop and find value
    for (int i = k; i < numsLen; i++)
    {
        sum += nums[i] - nums[i - k];
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    return maxSum;
}

int main()
{
    int nums[] = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    int k = 3;
    int numsLen = sizeof(nums) / sizeof(nums[0]);

    int result = maximumSum(nums, numsLen, k);
    printf("The result is %d \n", result);
    return 0;
}
