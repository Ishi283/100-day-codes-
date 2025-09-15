//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int n,r,re=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
    r=n%10;
    re=re*10+r;
    n=n/10;
    }
    printf("Reversed number=%d\n",re);
    return 0;
}