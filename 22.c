// Check for palindrome

//To check Palindrome

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int isPalindrome=1;
    
    printf("Enter a string : \n");
    scanf("%s",&str);
    
    int len=strlen(str);
    for(int i=0;i<len-i-1;i++)
    {
        if(str[i] != str[len-i-1])
        {    
            isPalindrome=0;
            break;
        }
    }
        
        if(isPalindrome)
        {
            printf("It is Palindrome");
        }
        else
        {
            printf("It is not Palindrome");
        }
    }