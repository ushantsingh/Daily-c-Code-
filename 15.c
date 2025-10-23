// Missing number in array[1 to n]

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of Elements : ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter %d Elements : ", n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int total = n * (n + 1) / 2; // sum of 1 to n

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    printf("Missing Number in the Array is : %d ", total - sum);
}