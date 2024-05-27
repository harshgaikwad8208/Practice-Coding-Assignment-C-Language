// Check if the given number is even or odd.

#include<stdio.h>
int odd_even();
void main()
{
    int x;
    odd_even();
    if(x==1)
    {
        printf("Even number.");
    }
    else
    printf("odd number.");
}
int odd_even()
{
    int no;
    printf("Enter the number:\n");
    scanf("%d",&no);
    if (no%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}