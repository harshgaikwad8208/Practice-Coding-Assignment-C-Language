// Check if the given number is even or odd.

#include<stdio.h>
int main()
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