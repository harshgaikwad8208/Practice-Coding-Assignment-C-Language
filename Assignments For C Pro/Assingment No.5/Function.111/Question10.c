// Add the (first and last) digit of a given number?

#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int no,fno,lno,sum;
    printf("Enter the number:\n");
    scanf("%d",&no);

    lno = no%10;

    while(no >= 10)
    {
        no = no/10;
    }
    fno = no;

    sum = fno + lno;
    printf("Sum of the first and last digits: %d\n",sum);

    return 0;
}