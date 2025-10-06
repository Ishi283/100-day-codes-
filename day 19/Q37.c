//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include<stdio.h>
int main()
{
    int a,b,n1,n2,hcf;
    int lcm=1;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    n1=a;
    n2=b;
while(n2!=0)
{
    int temp=n2;
    n2= n1 % n2;
    n1=temp;
}
hcf=n1;
lcm = (a*b)/hcf;
printf("LCM is:%d",lcm);
    return 0;
}