//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,f,d,s;
    printf("Enter the number:");
    scanf("%d",&n);
    l=n%10;
    d=(int)log10(n);
    f=n/(int)pow(10,d);
    s=l*(int)pow(10,d)+(n%(int)pow(10,d));
    s=s-l+f;
    printf("Number after swapping:%d",s);
    return 0;
}