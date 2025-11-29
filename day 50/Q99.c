//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
int main() 
{
    int dd, mm, yyyy;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    printf("%02d-", dd);
    if(mm == 1)  printf("Jan-");
    else if(mm == 2)  printf("Feb-");
    else if(mm == 3)  printf("Mar-");
    else if(mm == 4)  printf("Apr-");
    else if(mm == 5)  printf("May-");
    else if(mm == 6)  printf("Jun-");
    else if(mm == 7)  printf("Jul-");
    else if(mm == 8)  printf("Aug-");
    else if(mm == 9)  printf("Sep-");
    else if(mm == 10) printf("Oct-");
    else if(mm == 11) printf("Nov-");
    else if(mm == 12) printf("Dec-");
    printf("%d", yyyy);
    return 0;
}
