//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    int i, j, k;
    int max_length = 0;
    printf("Enter a string: ");
    scanf("%s", s);
    int len = strlen(s);
    printf("String: %s\n", s);
    for (i = 0; i < len; i++) 
    {
        int visited[256] = {0};
        for (j = i; j < len; j++) 
        {
            if (visited[(int)s[j]] == 1) 
            {
                break;
            }
            visited[(int)s[j]] = 1;
            int current_length = j - i + 1;
            
            if (current_length > max_length) 
            {
                max_length = current_length;
            }
        }
    }
    printf("Length of longest substring without repeating characters: %d\n", max_length);
    return 0;
}