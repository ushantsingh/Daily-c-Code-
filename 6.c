// WAP to find Union and Intersection of two Arrays

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int unionArr[100], interArr[100];
    int uIndex = 0, iIndex = 0;

    //  Copy all elements of arr1 to union array 
    for (int i = 0; i < n1; i++) {
        unionArr[uIndex++] = arr1[i];
    }

    // Add elements of arr2 to union array if not already present 
    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArr[uIndex++] = arr2[i];
        }
    }

    //  Find Intersection 
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                interArr[iIndex++] = arr1[i];
                break;
            }
        }
    }

    //  Print Union 
    printf("Union: ");
    for (int i = 0; i < uIndex; i++) {
        printf("%d ", unionArr[i]);
    }

    //  Print Intersection 
    printf("\nIntersection: ");
    for (int i = 0; i < iIndex; i++) {
        printf("%d ", interArr[i]);
    }

    return 0;
}