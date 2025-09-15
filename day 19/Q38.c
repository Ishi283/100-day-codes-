//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum =0;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}