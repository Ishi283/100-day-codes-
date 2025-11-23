//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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
    printf("Array:\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose:\n");
int trans[b][a];
for (int i=0; i<a; i++)
{
    for(int j=0; j<b; j++)
    {
        trans[j][i]=arr[i][j];
    }
}
for(int i=0; i<b; i++)
{
    for(int j=0;j<a; j++)
    {
        printf("%d ",trans[i][j]);
    }
    printf("\n");
}
return 0;

}