//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter the string:");
    scanf(" %s", str);   
    if (str[0] != ' ')
    printf("%c", str[0]);
    while (str[i] != '\0') 
    {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') 
        {
            printf("%s", str[i+1]);
        }
        i++;
    }
    return 0;
}