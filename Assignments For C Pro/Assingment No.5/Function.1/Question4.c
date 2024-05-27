// Check if the given number is even or odd.

#include<stdio.h>
void odd_even();
void main()
{
    odd_even();
}
void odd_even()
{
    int no;
    printf("Enter the number:\n");
    scanf("%d",&no);
    if (no%2==0)
    {
        printf("The number is Even %d.",no);
    }
    else
    {
        printf("The number is odd %d.",no);
    }
}