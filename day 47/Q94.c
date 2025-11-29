//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    char l[50];
    int i;
    int maxl = 0, curl = 0;
    int s=0, maxs=0;
    printf("Enter a sentence: ");
    fgets(str,100,stdin);
    for(i=0; str[i]!='\0'; i++) 
    {

        if(str[i]!=' ' && str[i]!='\n') 
        {
            curl++;   
        } 
        else 
        {
            if(curl > maxl) 
            {
                maxl = curl; 
                maxs = i - curl; 
            }
            curl=0;
        }
    }
    strncpy(l, &str[maxs], maxl);
    l[maxl]='\0';
    printf("%s",l);
    return 0;
}
