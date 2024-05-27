// Check number is armstrong or not?

#include<stdio.h>
void arm();
void main()
{
    arm();
}
void arm()
{
    int n,r,sum=0,temp;
    printf("Enter the number:\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    if(temp==sum)
    printf("It is a armstrong number");
    else
    printf("It is not a armstrong number");
    
}
