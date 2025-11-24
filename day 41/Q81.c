//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include<stdio.h>
int main()
{
    char n[50];
    int count=0;
    printf("Enter the character:");
    scanf("%s",&n);
    for(int i=0; n[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}