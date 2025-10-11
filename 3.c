// Wap Reverse an array in place


#include<stdio.h>
int main()
{
    int arr[]={54,76,89,32,46,98,99,90};
    int l=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end =l-1;

    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }

    printf("Reversed Array : {");
    for(int i=0;i<l;i++)
    {
        printf("%d",arr[i]);
        if(i<l-1)
        {
            printf(", ");
        } 
    }
    printf("}");
}