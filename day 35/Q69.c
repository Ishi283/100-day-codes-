//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int n;
int input()
{
    printf("Enter the length of array:");
    scanf("%d",&n);
}
int main()
{
    input();
    int ar[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the %d index:",i);
        scanf("%d",&ar[i]);
    }
    int max = ar[0];
    int smax = ar[0];
    for (int i=0; i<n; i++)
    {
        if ( ar[i] > max)
        {
            smax = max;
            max = ar[i];
        }
        else if(ar[i]> smax)
        {
            smax = ar[i];
        }
    }
    printf("%d",smax);
    return 0;
}