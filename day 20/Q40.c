//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a binary number:");
    scanf("%d",&n);
    int og=n,i=0;
    int a[50];
    a[0]=0;
    while(n!=0)
    {
        count++;
        a[i]=n%10;
        i++;
        n/=10;
    }
    for(int j=count -1;j>=0;j--)
    {
        if(a[j]==0)
        {
            printf("1");
        }
        else if(a[j]==1)
        {
            printf("0");
        }
        else
        {
            printf("Invalid");
            break;
        }
    }
    return 0;
}