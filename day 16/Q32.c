//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    int n,a,re=0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
    r=n%10;
    re=re*10+r;
    n=n/10;
    }
    if(a==re)
    {
        printf("Palindrome no.");
    }
    else
    {
        printf("Not a palindrome no.");
    }
    return 0;
}