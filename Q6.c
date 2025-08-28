/*Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers :");
    scanf("%d %d",&a,&b);
    printf("before swapping:\n");
    printf("first no.=%d\n",a);
    printf("second no.=%d\n",b);
    c=a;
    a=b;
    b=c;
    printf("after swapping:\n");
    printf("first no.=%d\n",a);
    printf("second no.=%d\n",b);
    getchar();
    getchar();
    return 0;
    
}