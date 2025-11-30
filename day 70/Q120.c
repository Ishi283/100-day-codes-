//Q120: Write a program to take a string input. Change it to sentence case.
/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[200];
    int i;
    int capitalize_next = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Original: %s", str);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') 
        {
            capitalize_next = 1;
        } 
        else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
            capitalize_next = 0;
        } 
        else if (!capitalize_next && str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32;
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            capitalize_next = 0;
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            capitalize_next = 0;
        }
    }
    printf("Sentence case: %s", str);
    return 0;
}