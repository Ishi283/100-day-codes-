//3: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,og;
    printf("Enter the number:");
    scanf("%d",&n);
    og=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    n=og;
    int sum=0;
    while(n>0)
    {
        sum=sum+pow(n%10,c);
        n=n/10;
    }
    if(sum==og)
    {
        printf("Amstrong no.");
    }
    else
    {
        printf("Not a amstrong no.");
    }
    return 0;
}