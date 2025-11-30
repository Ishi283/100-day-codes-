//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
int main() 
{
    int n, k, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter window size k: ");
    scanf("%d", &k);
    printf("Array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Window size k: %d\n", k);
    if (k > n) {
        printf("Error: k cannot be greater than array size\n");
        return 1;
    }
    printf("\nFirst negative in each window:\n");
    for (i = 0; i <= n - k; i++) {
        int first_negative = 0; 
        printf("Window %d: [", i + 1);
        for (j = i; j < i + k; j++) 
        {
            printf("%d", arr[j]);
            if (j < i + k - 1) printf(", ");
            if (arr[j] < 0 && first_negative == 0) 
            {
                first_negative = arr[j];
            }
        }
        printf("] -> First negative: ");
        if (first_negative != 0) 
        {
            printf("%d\n", first_negative);
        } else 
        {
            printf("0 (no negative)\n");
        }
    }
    printf("\nFirst negative integers in each window: ");
    for (i = 0; i <= n - k; i++) 
    {
        int first_negative = 0; 
        for (j = i; j < i + k; j++) 
        {
            if (arr[j] < 0) 
            {
                first_negative = arr[j];
                break;  
            }
        }
        printf("%d", first_negative);
        if (i < n - k) 
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}