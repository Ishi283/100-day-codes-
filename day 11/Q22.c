//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter cost price and selling price:");
    scanf("%d %d",&cp,&sp);
    if(cp>sp)
    {
        l=((cp-sp)*100)/cp;
        printf("Loss %d%%\n",l);
    }
    else if(sp>cp)
    {
        p=((sp-cp)*100)/cp;
        printf("Profit %d%%\n",p);
    }
    else
    {
        printf("No profit No Loss");
    }
    return 0;
}