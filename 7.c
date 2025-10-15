//  Wap to cyclically rotate an array by one .

#include<stdio.h>
int main()
{
    int n; 
    printf("Enter number of Elements :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter array elements :\n");

     for (int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }

     printf("The entered array is : {");
     for(int i=0;i<n;i++)
     {
     printf("%d",arr[i]);
     if(i<n-1)
        {
            printf(", ");
        }
     }
     printf("}");

     int last=arr[n-1];

     for(int i=n-1;i>0;i--)
     {
        arr[i]=arr[i-1];
     }

     arr[0]=last;

     printf("\nCyclic Rotated array by one is : {");

     for(int i=0;i<n;i++)
     {
        printf("%d",arr[i]);

        if(i<n-1)
        {
            printf(", ");
        }
     }
     printf("}");
}