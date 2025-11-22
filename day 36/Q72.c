//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter size of row:");
    scanf("%d",&a);
    printf("Enter the size of column:");
    scanf("%d",&b);
    int arr[a][b];
    printf("Enter the elements:");
    for (int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int sum = 0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("Sum : %d",sum);
    return 0;
}