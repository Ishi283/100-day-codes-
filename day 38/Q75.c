//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Array 1:\n");
    printf("Enter size of row:");
    scanf("%d",&a);
    printf("Enter the size of column:");
    scanf("%d",&b);
    int arr1[a][b];
    printf("Enter the elements:");
    for (int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nArray 2:\n");
    int c,d;
    printf("Enter size of row:");
    scanf("%d",&c);
    printf("Enter the size of column:");
    scanf("%d",&d);
    int arr2[a][b];
    printf("Enter the elements:");
    for (int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    if(a==c && b==d)
    {
    int sum[a][c];
    printf("Result:\n");
    for (int i=0;i<a;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("Addition not possible");
    }
    return 0;
}