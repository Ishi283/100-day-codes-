//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

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
    for(int i=0;i<a;i++)
    {
        sum = sum + arr[i][i];
    }
    printf("Sum is %d",sum);
    return 0;
}