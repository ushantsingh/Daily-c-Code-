// Find Intersection of two sorted array

#include<stdio.h>
void findIntersection(int arr1[],int arr2[],int n1,int n2){
    int i=0;int j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]==arr2[j])
        {
            printf("%d",arr1[i]);
            if(i<n1-1)
            {
                printf(", ");
            }
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else//if(arr1[i]>arr2[j])
        {
            j++;
        }       
    }
}

int main()
{
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={2,4,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    printf("Intersection : ");
    findIntersection(arr1,arr2,n1,n2);

}