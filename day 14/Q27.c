//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
int main()
{
    int i, n, sum=0;
    int t;
    printf("Enter the number: ");
    scanf("%d", &n);
    t=n+n;
    for(i=1; i<=t; i+=2)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}

