// Find all pairs with a given sum

#include<stdio.h>

int main()
{
    int sum;
    int n;
    int arr[50];

    printf("Enter Number of Elements : ");
    scanf("%d",&n);

    printf("Enter the Array Elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Entered the Desired Sum : ");
    scanf("%d",&sum);

    for (int i = 0; i < n; i++)
    {
       for(int j=i+1;j<n;j++)
       {
        if(arr[i] + arr[j] == sum)
        {
            printf("(%d,%d)\n",arr[i],arr[j]);
        }
       }
    }
    

}