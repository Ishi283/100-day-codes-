//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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
    printf("Transversal:\n");
    for(int k=0;k<a;k++)
    {
        int i=0;
       int j=k;
        while(i < a && j>=0)
        {
        printf("%d ",arr[i][j]);
        i++;
        j--;
        }
    }
    for(int k=1;k<a;k++)
    {
        int i=k;
        int j=b-1;
        while(i < a && j>=0)
        {
        printf("%d ",arr[i][j]);
        i++;
        j--;
        }
    }
    return 0;

}