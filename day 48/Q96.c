//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include<stdio.h>
int main() 
{
    char str[100];
    int i = 0, start = 0;
    printf("Enter a sentence: ");
    fgets(str,100,stdin);
    while(str[i] != '\0') 
    {
        if(str[i]==' '||str[i]=='\n') 
        {
            int left = start;
            int right = i - 1;
            while(left < right) 
            {
                char t = str[left];
                str[left] = str[right];
                str[right] = t;
                left++;
                right--;
            }
            start = i + 1; 
        }
        i++;
    }
    printf("%s",str);
    return 0;
}
