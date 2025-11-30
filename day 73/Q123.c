//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
int main() 
{
    FILE *file;
    char filename[50];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;    
    printf("Enter filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Could not open file!\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) 
    {
        characters++;    
        if (ch == '\n') 
        {
            lines++;
        }
        if (ch == ' ' || ch == '\n' || ch == '\t') 
        {
            in_word = 0;
        } 
        else if (in_word == 0) 
        {
            in_word = 1;
            words++;
        }
    }
        if (characters > 0 && ch != '\n') 
        {
        lines++;
    }
    fclose(file);
    printf("\nFile Statistics:\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}