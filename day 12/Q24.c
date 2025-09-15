/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>

int main() 
{
    int u;
    float b= 0.0;
    printf("Enter the no. of units consumed: ");
    scanf("%d", &u);
    if(u<=50) 
    {
        b=u*5.0;
    }
     else if(u<=150) 
    {
        b=(50*5.0)+((u-50)*6.0); 
    } 
    else if(u<=250) 
    {
        b=(50*5.0)+(100*6.0)+((u-150)*8.5);
    }
    printf("Bill: rupee%.0f\n", b);
    return 0;
}