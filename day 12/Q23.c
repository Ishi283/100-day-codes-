/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of days the book is late:");
    scanf("%d",&n);
    if(n>0 && n<=5)
    {
        printf("Fine rupee%d\n",n*2);
    }
    else if(n>5 && n<=10)
    {
        printf("Fine rupee%d\n",(5*2)+((n-5)*4));
    }
    else if(n>10 && n<=30)
    {
        printf("Fine rupee%d\n",(5*2)+(5*4)+((n-5)*6));
    }
    else if(n>30)
    {
        printf("Membership Cancelled\n");
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}