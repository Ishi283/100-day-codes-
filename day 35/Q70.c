//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
int n;
int input()
{
    printf("Enter the length of array:");
    scanf("%d",&n);
}
void rotate(int arr[],int n)
{
    int t = arr[n-1];
    for(int i= n-1; i>=0; i++)
    {
        if(i==0)
            arr[i]=t;
            else
            arr[i]=arr[i-1];
    }
}
void k_rotate(int arr[],int n,int k)
{
    k=k%n;
    for(int i=0;i<k;i++)
    {
        rotate(arr,n);
    }
}
int main()
{
    input();
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the %d index:",i);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the number of rotations:");
    scanf("%d",&k);
    k_rotate(arr,n,k);
    printf("The rotated array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}