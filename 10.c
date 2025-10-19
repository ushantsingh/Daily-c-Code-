// Leaders in an array

#include<stdio.h>
int leaders(int arr[],int n)
{
    int maxFromRight=arr[n-1];// last element is always leader
    printf("%d, ",maxFromRight);
    
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>maxFromRight)
        {
            maxFromRight=arr[i];
            printf("%d",maxFromRight);
            if(i<n-1)
            {
                printf(", ");
            }
        }
    }
}

int main()
{
    int arr[]={16, 17, 4, 3, 5, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Leaders in Array are : ");
    leaders(arr,n);
    return 0;
}