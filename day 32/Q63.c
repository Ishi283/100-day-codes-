//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int a,b;
int input1()
{
    printf("Enter the length of 1st array:");
    scanf("%d", &a);
}
int input2()
{
    printf("Enter the length of 2nd array:");
    scanf("%d",&b);
}
int main()
{
    input1();
    int ar1[a];
    for(int i=0; i<a; i++)
    {
        printf("Enter the %d index:",i);
        scanf("%d", &ar1[i]);
    }
    input2();
    int ar2[b];
    for(int i=0; i<b; i++)
    {
        printf("Enter the %d index:",i);
        scanf("%d", &ar2[i]);
    }
    int ar3[a+b];
    for(int i=0; i<a; i++)
    {
        ar3[i]=ar1[i];
    }
    for(int i=0; i<b; i++)
    {
        ar3[a+i]=ar2[i];
    }
    printf("Merged array:");
    for(int i=0; i<a+b; i++)
    {
        printf("%d ",ar3[i]);
    }
    return 0;
}