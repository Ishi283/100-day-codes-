//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int count1=0,count2=0;
    printf("Enter the first string:");
    scanf("%s",str1);
    printf("Enter the second string:");
    scanf("%s",str2);
    if(strlen(str1)!=strlen(str2))
    {
        printf("Not anagrams");
    }
    for(int i=0;str1[i]!='\0';i++)
    {
        count1 = count1+ str1[i];
    }
    for(int j=0;str2[j]!='\0';j++)
    {
        count2 = count2 + str2[j];
    }
    if(count1==count2)
    {
        printf("Anagrams");
    }
    else
    {
        printf("Not anagrams");
    }
    return 0;
}