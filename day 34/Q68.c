//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include<stdio.h>
int a;
int input()
{
    printf("Enter the length of array:");
    scanf("%d",&a);
}
int main()
{
    input();
    int ar[a];
    int pos;
    for(int i=0; i<a; i++)
    {
        printf("Enter the %d index:",i);
        scanf("%d",&ar[i]);
    }
    int n=a;
     printf("Enter the position of element to be deleted: ");
     scanf("%d",&pos);
    for(int i=pos-1; i<n-1; i++)
    {
        ar[i]=ar[i+1];
    }
    n--;
    for(int i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}