//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include<stdio.h>
#include<string.h>
int main() 
{
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    int i, n = strlen(str), flag = 1;
    for (i=0; i<n/2; i++) 
    {
       if (str[i] != str[n-i-1]) 
{
     flag = 0;
     break;
}
    }
    if (flag) 
    {
        printf("Palindrome\n");
    }
else 
{
    printf("Not a palindrome\n");
}
return 0;
}