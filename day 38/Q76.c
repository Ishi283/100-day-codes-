//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter size of row:");
    scanf("%d",&a);
    printf("Enter the size of column:");
    scanf("%d",&b);
    int arr[a][b];
    printf("Enter the elements:");
   
    for (i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
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
    int trans[b][a];
for (i=0; i<a; i++)
{
    for(j=0; j<b; j++)
    {
        trans[j][i]=arr[i][j];
    }
}
int s=1;
for(i=0;i<a;i++)
{
    for(j=0;j<b;j++)
    {
if(trans[i][j] != arr[i][j])
{
   s=0;
   break;
}
    }
    if(!s)
    {
        break;
    }
}
if(s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
return 0;

}