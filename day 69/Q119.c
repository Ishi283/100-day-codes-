//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    int actual_sum = 0;
    int expected_sum = 0;
    for (i = 0; i < n; i++) 
    {
        actual_sum += nums[i];
    }
    int max = nums[0];
    for (i = 1; i < n; i++) 
    {
        if (nums[i] > max) 
        {
            max = nums[i];
        }
    }
    for (i = 0; i <= max; i++) 
    {
        expected_sum += i;
    }
    int repeated = actual_sum - expected_sum;
    printf("Repeated element: %d\n", repeated);
    return 0;
}