//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

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
    for(int i=0; i<a/2; i++)
    {
    int temp =ar[i];
    ar[i]=ar[a-i-1];
    ar[a-i-1]=temp;
    }
    printf("Reversed array:");
    for(int i=0; i<a; i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}