// Find factorial of number.

#include<stdio.h>
void facto(int);
void main()
{
    int no;
    printf("Enter the number:\n");
    scanf("%d",&no);

    facto(no);
}
void facto(int no)
{
    int i,fact=1;
   
    for(i = 1; i <= no; i++)
    
        fact = fact*i;
        printf("Factorial of %d is: %d",no ,fact);
    

    return 0;
}