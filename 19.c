// Merge two sorted arrays without using extra space

#include<stdio.h>
void sort(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]>arr[j])
        {
        
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
}

void merge (int arr1[],int arr2[],int n , int m)
{
    for(int i=0;i<n;i++)
    {
        if(arr1[i]>arr2[0])
        {
            int temp =arr1[i];
            arr1[i]=arr2[0];
            arr2[0]=temp;
            
            sort(arr1,n);
            sort (arr2,m);
            
        }
    }
}


int main()
{
    int arr1[]={2,9,6,4,8,1};
    int arr2[]={8,0,3,7,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,arr2,n,m);
    printf("arr1 : {");
    for(int i=0;i<n;i++){
    printf("%d",arr1[i]);
    if(i<n-1){
        printf(", ");
    }
    }
    printf("}");
    
    printf("\narr2 : {");
    for (int i=0;i<m;i++){
    printf("%d",arr2[i]);
    if(i<n-1){
        printf(", ");
    }
    }
    printf("}");
    
    return 0;
}