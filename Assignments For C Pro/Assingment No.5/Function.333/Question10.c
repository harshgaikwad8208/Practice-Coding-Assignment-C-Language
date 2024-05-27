// Add the (first and last) digit of a given number?

#include<stdio.h>
void sum(int);
void main()
{
    int no;
    printf("Enter the number:\n");
    scanf("%d",&no);
    sum(no);
}
void sum(int no)
{
    int fno,lno,sum;
    

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