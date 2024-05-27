// Check if the given number is even or odd.

#include<stdio.h>
int odd_even(int);
void main()
{
    int vo,v;
    printf("Enter the number:\n");
    scanf("%d",&vo);
    v=odd_even(vo);
    if(v==1)
    {
        printf("The number is Even.");
    }
    else
    {
        printf("The number is odd.");
    }
}
int odd_even(int no)
{
    
    if (no%2==0)
    {
        return 1;
        
    }
    else
    {
        return 0;
        
    }
}