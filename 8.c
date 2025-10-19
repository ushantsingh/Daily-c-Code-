// Kadane's Algorithm - Maximum Subarray Sum

#include<stdio.h>
#include<limits.h>

int maxSubArray(int arr[],int n)
{
    int maxSum=INT_MIN;
    int currentSum=0;

    for(int i=0;i<n;i++)
    {
        currentSum+=arr[i];
        if(currentSum>maxSum)
        {
            maxSum=currentSum;
        }
        if(currentSum<0)
        {
            currentSum=0;
        }
    }
    return maxSum;
}
int main()
{
    int arr[]={4,2,-9,6,-3,1,-6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Maximum SubArray Sum is %d\n",maxSubArray(arr,n));
    return 0;
}