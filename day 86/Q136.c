//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
enum Operation 
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};
int main() 
{
    enum Operation choice;
    int a, b, result;    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nMenu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch(choice) 
    {
        case ADD:
            result = a + b;
            printf("%d + %d = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("%d - %d = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("%d * %d = %d\n", a, b, result);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}