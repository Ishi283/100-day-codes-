//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char c[5];
    printf("Enter the string:");
    scanf("%s",str);
    printf("Enter the character to be searched:");
    scanf("%s",c);
    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==c[0])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}