//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    int i = 0, j = strlen(str) - 1;
    while (i < j) 
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string: %s", str);
    return 0;
}