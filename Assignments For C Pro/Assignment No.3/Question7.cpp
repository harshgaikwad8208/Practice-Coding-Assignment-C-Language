// Find factorial of number.

#include<stdio.h>

int main()
{
    int i,no,fact=1;
    printf("Enter the number:\n");
    scanf("%d",&no);

    for(i = 1; i <= no; i++)
    
        fact = fact*i;
        printf("Factorial of %d is: %d",no ,fact);
    

    return 0;
}