//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int a;
int input()
{
    printf("Enter the length of array:");
    scanf("%d", &a);
}
int main()
{
    input();
    int ar[a];
    for(int i=0; i<a; i++)
    {
        printf("Enter the %d index:",i);
        scanf("%d", &ar[i]);
    }
    int b;
    printf("Enter the element to be searched:");
    scanf("%d",&b);
    for(int i=0; i<a; i++)
    {
        if(ar[i]==b)
        {
            printf("The element %d is found in %d index",b,i);
        }
    }
return 0;
}
