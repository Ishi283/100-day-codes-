//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
int main() 
{
    FILE *file;
    int num, count = 0, sum = 0;
    float average;    
    file = fopen("numbers.txt", "r");
    if (file == NULL) 
    {
        printf("Error: Could not open numbers.txt!\n");
        return 1;
    }
    printf("Reading numbers from numbers.txt...\n");
    while (fscanf(file, "%d", &num) == 1) 
    {
        sum += num;
        count++;
    }
    fclose(file);
    
    if (count == 0) 
    {
        printf("No numbers found in file!\n");
        return 1;
    }
    average = (float)sum / count;
    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}