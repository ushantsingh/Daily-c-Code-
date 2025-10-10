// Wap to find the maximum and minimum element in an array.

#include<stdio.h>
int main()
{
    int n;
    int max,min;
    int arr[100];
    printf("Enter Number of element : ");
    scanf("%d",&n);

    printf("Enter %d Element :\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        
        if(arr[i]<min)
        min=arr[i];
    }
    printf("Maximum Array Element is --> %d\n",max);
    printf("Minimum Array Element is --> %d\n",min);
}