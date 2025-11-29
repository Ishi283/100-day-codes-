//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int l, i, last = -1;

    printf("Enter full name:");
    fgets(str, 100, stdin);
    l = strlen(str);
    if(str[l-1] == '\n')
        str[l-1] = '\0';
    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ' ')
            last = i;
    }
    if(str[0]!= ' ')
        printf("%c.", str[0]);
    for(i = 1; i < last; i++) 
    {
        if(str[i] == ' ' && str[i+1] != ' ') 
        {
            printf("%c.", str[i+1]);   
        }
    }
    printf(" %s", &str[last+ 1]);
    return 0;
}
