// Count the number of occurrences of an element

#include<stdio.h>

int main()
{
    int arr[50];//={5,7,3,5,6,2,1,3,5,7,8,9,0,5};
    int count =0;
    // int n=sizeof(arr)/sizeof(arr[0]);
    int n;
    int DesiredNo;

    printf("Enter Number of Elements : ");
    scanf("%d",&n);

    printf("Enter %d Array Element : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the Element which you want to count : ");
    scanf("%d",&DesiredNo);

    for (int i=0;i<n;i++)
    {
        if(arr[i]==DesiredNo)
        {
            count ++;
        }
    }
    printf("The Number of Occurance of %d is %d times",DesiredNo,count);
}