#include<stdio.h>
void rum(int*);
void main()
{
    int mo;
    printf("Enter the number:\n");
    scanf("%d",&mo);
    
    rum(&mo);
}
void rum(int*no)
{
    int rem;
    int rev = 0;
    int sum=0;    

    while (*no>0)
    {
        rem = *no%10;
        sum = sum+rem;
        rev = rev*10+rem;
        *no = *no/10;
       
    }

     printf("sum is %d.\n",sum);
     printf("rev is %d. \n",rev);
    
}