//Maximum Product Subarray

#include<stdio.h>
int maxproduct(int arr[], int n)
{
    int maxProd=arr[0];
    int minProd=arr[0];
    int ans=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i]*maxProd)
        {
            maxProd=arr[i];
        }
        else 
        {
            maxProd=arr[i]*minProd;
        }
        
        if(arr[i]<arr[i]*maxProd)
        {
            minProd=arr[i];
        }
        else 
        {
            minProd=arr[i]*maxProd;
        }
        
        if(maxProd>ans)
        {
            ans=maxProd;
        }
    }
    return ans;
}

int main()
{
    int arr[]={2,3,-2,-4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Product SubArray : %d",maxproduct(arr,n));
    return 0;
}