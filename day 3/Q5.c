/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main()
{
    int c,f;
    printf("enter the temperature in celsius c :");
    scanf("%d",&c);
    f=(c*9.0/5.0)+32.0;
    printf("temperature in fahrenheit=%d",f);
    getchar();
    getchar();
    return 0;
}