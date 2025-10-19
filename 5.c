// Sort an array of 0s, 1s and 2s

#include <stdio.h>
void SortArray(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else// -->arr[mid]==2
        {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

int main()
{
    int i;
    int arr[] = {0, 2, 1, 2, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    SortArray(arr, n);
    printf("{");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("}");
}