//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include<stdio.h>
int main()
{
    int n,i;
    int p=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2; i<=n; i=i+2)
    {
        p=p*i;
    }
    printf("%d",p);
    return 0;
}