// Check if the given number is even or odd.

#include<stdio.h>
void odd_even(int);
void main()
{
    int vo;
    printf("Enter the number:\n");
    scanf("%d",&vo);
    odd_even(vo);
}
void odd_even(int no)
{
    
    if (no%2==0)
    {
        printf("The number is Even %d.",no);
    }
    else
    {
        printf("The number is odd %d.",no);
    }
}