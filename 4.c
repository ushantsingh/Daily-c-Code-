// WAP to find the 'Kth' max and min element of an array. 

#include<stdio.h>

void sortArray(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main()
{
    int arr[100],n,k;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the Array elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value of k :");
    scanf("%d",&k);

    sortArray(arr,n);

    printf("Sorted Array :\n {");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        if(i<n-1)
        {
            printf(", ");
        }
    }
    printf("}");

    if(k<=n)
    {
        printf("\n'Kth' min element = %d",arr[k-1]);
        printf("\n'Kth' max element = %d",arr[n-k]);
    }
    else{
        printf("\n Invalid! k is larger than array size.");
    }
}