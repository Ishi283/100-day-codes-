//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

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
    int arr2[c][d];
    printf("Enter the elements:");
    for (int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
}
if(b!=c)
{
    printf("Multiplication not possible:");
};
int mul[a][d];
printf("Result:\n");
for(int i=0;i<a;i++)
{
    for(int j=0;j<d;j++)
    {
        mul[i][j]=0;
        for(int k=0; k<b;k++)
        {
        mul[i][j] = mul[i][j] + (arr1[i][k] * arr2[k][j]);
        }
        printf("%d ",mul[i][j]);
    }
    printf("\n");
}
}