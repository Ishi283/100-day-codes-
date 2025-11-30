//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>
struct Student 
{
    char name[50];
    int roll;
    int marks;
};
void display(struct Student s) 
{
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
}
int main() 
{
    struct Student s1;
    printf("Enter Student Name: ");
    scanf("%s", s1.name);
    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);
    printf("Enter Marks: ");
    scanf("%d", &s1.marks);
    display(s1);
    return 0;
}