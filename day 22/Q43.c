//Q43 Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int main()
{
    int n,og,r,f;
    printf("Enter the number:");
    scanf("%d",&n);
    og=n;
    int sum=0;
    while(n>0)
    {
        r=n%10;
        f=1;
        for(int i=1;i<=r;i++)
        {
            f*=i;
        }
        sum+=f;
        n=n/10;
    }
    if(sum==og)
    {
        printf("Strong number");
    }
    else
    {
        printf(" Not strong number");
    }
    return 0;
}