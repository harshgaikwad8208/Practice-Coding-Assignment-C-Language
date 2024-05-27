// Check number is prime or not.

#include<stdio.h>
void pro(int);
void main()
{
    int n;
    printf("Enter the prime number:\n");
    scanf("%d",&n);
    pro(n);
}
void pro(int n)
{
    int flag = 0, m = 0,i;
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