/*Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the numbers :");
    scanf("%d %d",&a,&b);
    printf("before swapping:\n");
    printf("first no.=%d\n",a);
    printf("second no.=%d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping:\n");
    printf("first no.=%d\n",a);
    printf("second no.=%d\n",b);
    getchar();
    getchar();
    return 0;
}