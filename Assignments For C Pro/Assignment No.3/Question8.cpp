// Check number is strong or not.

#include<stdio.h>
int main()
{
    int n,r,fact,temp,i;
    int sum = 0;
    temp = n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        r = n%10;
        i = 1; 
        fact = 1;
        while (i<=r)
        {
            fact = fact*i;
            i++;
        }
        sum = sum + fact;
        n = n/10;
        
    }
    if(sum == temp)
    printf("strong");
    else
    printf("Not Strong");
}