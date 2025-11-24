//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char n[50];
    printf("Enter the character:");
    scanf("%s",n);
    for(int i=0; n[i]!='\0'; i++)
    {
        printf("%c\n",n[i]);
    }
    return 0;
}