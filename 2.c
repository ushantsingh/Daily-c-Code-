// Move all negative nnumbers to beginning and positive to end.

#include<stdio.h>
int main()
{
    int arr[]={2,-3,7,8,-9,-5,6,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j;
    int result[n];

    // copying all negative numbers

    for (int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            result[j++]=arr[i];
        }
    }

    // copying all positive numbers 

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            result[j++]=arr[i];
        }
    }

    // combinig both copied array 

    printf("Rearranged array : { ");
    for(int i=0;i<n;i++)
    {
        printf("%d",result[i]);
        if(i<n-1)
        {
            printf(", ");
        }
    }
    printf("}");
}