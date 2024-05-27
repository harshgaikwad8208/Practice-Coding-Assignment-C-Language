

#include<stdio.h>

int main()
{
    int no;
    printf("Enter the number:\n");
    scanf("%d",&no);
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
     printf("sum is %d.\n",sum);
     printf("rev is %d. \n",rev);  
}