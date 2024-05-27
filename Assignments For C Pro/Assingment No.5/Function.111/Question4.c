// Check number is prime or not.

#include<stdio.h>
void pro();
void main()
{
    pro();
}
void pro()
{
    int n, i, flag = 0, m = 0;
    printf("Enter the prime number:\n");
    scanf("%d",&n);
    m = n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("Number is not prime.");
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Number is prime"); 
}