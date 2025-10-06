// Q45 Write a program to find sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1: 
3
Output 1:
1.56

Input 2:
5
Output 2:
2.22

*/
#include<stdio.h>
int main()
{
    int n;
    float sum=1;
    printf("Enter the n term:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        sum+=(float)(2*i)/(4*i-1);
    }
    printf("%.2f",&sum);
    return 0;

}
