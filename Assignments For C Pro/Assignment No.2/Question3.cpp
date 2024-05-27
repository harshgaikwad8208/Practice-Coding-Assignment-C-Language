// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include<stdio.h>
int main()
{
    int no1,no2,result;
    char op;
    printf("Enter the value of no1:\n");
    scanf("%d",&no1);
    printf("Enter the value of no2:\n");
    scanf("%d",&no2);

    printf("Enter an operator (+,-,*,/,%%):\n ");
    fflush(stdin);
    scanf("%c",&op);

    if(op == '+')
    {
        result = no1+no2;
        printf("sum is : %d",result);
    }
    if(op == '-')
    {
        result = no1-no2;
        printf("div is : %d",result);
    }
    if(op == '*')
    {
        printf("multi is : %d",result);
    }
    if(op == '/')
    {
        result = no1/no2;
        printf("div is : %d",result);
    }
    if(op == '%')
    {
        result = no1%no2;
        printf("mod is : %d",result);
    }

}