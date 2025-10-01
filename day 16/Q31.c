//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include<stdio.h>
int main()
{
    int n,i,j=0,a[100],count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        a[j]=n%2;
        n=n/2;
        j++;
        count++;
    }
    for(i= count -1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}