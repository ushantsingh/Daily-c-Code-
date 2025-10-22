// Subarray when given two sum(two pointer / sliding window)

#include <stdio.h>
void subArraySum(int arr[], int n, int target)
{
    int start = 0;
    int sum = 0;

    for (int end = 0; end < n; end++)
    {
        sum += arr[end];

        while (sum > target && start < end)
        {
            sum -= arr[start];
            start++;
        }

        if (sum == target)
        {
            printf("SubArray found from the index %d to %d\n ", start, end);
            return;
        }
    }
    printf("No SubArray found with the given sum.\n");
}

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 33;

    subArraySum(arr, n, target);
    return 0;
}