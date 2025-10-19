// Rearrange array in alternating positive & negative items

#include <stdio.h>

void rearrange(int arr[], int n)
{
    int pos[n], neg[n];
    int p = 0, q = 0;

    // Separate positive and negative numbers
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[q++] = arr[i];
    }

    // Now merge them alternately
    int i = 0, j = 0, k = 0;
    while (i < p && j < q)
    {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    // If any positive numbers are left
    while (i < p)
        arr[k++] = pos[i++];

    // If any negative numbers are left
    while (j < q)
        arr[k++] = neg[j++];
}

int main()
{
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printf("Rearranged array: {");
    for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
            if(i<n-1)
            {
                printf(", ");
            }
        }
        printf("}");

    return 0;
}

