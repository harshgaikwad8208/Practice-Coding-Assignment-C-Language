// Accept a 3 digit number from user and find the sum of the digits and also reverse the number.

#include<stdio.h>
int sum(int);
int rum(int);
void main()
{
    int mo;
    printf("Enter the number:\n");
    scanf("%d",&mo);
    int x,y;
    x=sum(mo);
    y=rum(mo);
    printf("sum is %d.\n",x);
    printf("rev is %d. \n",y);
}
int sum(int no)
{
    
    int rem;
    int rev = 0;
    int sum=0;

    while (no>0)
    {
        rem = no%10;
        sum = sum+rem;
        rev = rev*10+rem;
        no = no/10;
       
    }

     //printf("sum is %d.\n",sum);
     return sum;
    
}
int rum(int no)
{
    
    int rem;
    int rev = 0;
    int sum=0;

    while (no>0)
    {
        rem = no%10;
        sum = sum+rem;
        rev = rev*10+rem;
        no = no/10;
       
    }

     //printf("rev is %d. \n",rev);
     return rev;
}
    
