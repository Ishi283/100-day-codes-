//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100], t[100];
    int count_s[26] = {0}, count_t[26] = {0};
    int i, is_anagram = 1;
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);
    printf("String s: %s\n", s);
    printf("String t: %s\n", t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    if (len_s != len_t) 
    {
        printf("Not Anagram\n");
        return 0;
    }
    for (i = 0; i < len_s; i++) 
    {
        count_s[s[i] - 'a']++;
        count_t[t[i] - 'a']++;
    }
    for (i = 0; i < 26; i++) 
    {
        if (count_s[i] != count_t[i]) 
        {
            is_anagram = 0;
            break;
        }
    }
    if (is_anagram) 
    {
        printf("Anagram\n");
    } 
    else 
    {
        printf("Not Anagram\n");
    }
    return 0;
}