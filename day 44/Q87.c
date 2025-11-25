//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int a=0,s=0,d=0,c=0;
    printf("Enter the string:");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")] = '\0';
    for(int i=0; str[i]!= '\0'; i++)
    {
        if(str[i]== ' ' || str[i]=='\n')
        {
            s++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            d++;
        }
        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            a++;
        }
        else
        {
            c++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d",s,d,c);
    return 0;
}
