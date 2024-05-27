// Check number is prime or not.

#include<stdio.h>
int pro();
void main()
{
    int x;
    x=pro();
    if(x==1)
    {
        printf("not prime");
    }
    else if(x==0)
    {
        printf("prime");
    }
}
int pro()
{
    int n, i, flag = 0, m;
    printf("Enter the prime number:\n");
    scanf("%d",&n);
    m = n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            return 1;
            //printf("Number is not prime.");
            flag=1;
            break;
        }
    }
    if(flag==0) 
    return 0;
    //printf("Number is prime"); 
}