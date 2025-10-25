// find Duplicate number in array

#include<stdio.h>
int main()
{
    int arr[]={3,5,6,33,5,3,6,23,33};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("Duplicate Number in Array is : %d\n",arr[i]);
            }
        }
    }
}

// #include<stdio.h>
// int main()
// {
//     int arr[]={3,5,6,33,5,3,6,23,33};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int seen[100]={0};//assuming number is <=99

//     for(int i=0;i<n;i++)
//     {
//         if(seen[arr[i]]==1)
//         {
//             printf("Duplicate Number is : %d\n",arr[i]);
//             return 0;
//         }
//         seen[arr[i]]=1;
//     }
//     printf("No Dupicate found \n");
//     return 0;
// }