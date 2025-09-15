//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
int main() 
{
int a,b,c;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
printf("Enter your choice: ");
scanf("%d", &c);
switch(c) 
{
case 1: 
    printf("Sum=%d",a+b); 
    break;
case 2: 
    printf("Difference=%d",a-b);
    break;
case 3:
    printf("Product=%d",a*b); 
    break;
case 4:
if(b!=0)
    printf("Quotient=%d",a/b);
else
    printf("Division not possible");
    break;
default:
   printf("Invalid input");
   break;
}
return 0;
}