// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include<stdio.h>
void ope(int no1,int no2,int result,char op);
void main()
{
    int n,nn,res;
    char opp;
    printf("Enter the value of no1:\n");
    scanf("%d",&n);
    printf("Enter the value of no2:\n");
    scanf("%d",&nn);

    printf("Enter an operator (+,-,*,/,%%):\n ");
    fflush(stdin);
    scanf("%c",&opp);
    ope(n,nn,res,opp);
}
void ope(int no1,int no2,int result,char op)
{
    

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
        result = no1+no2;
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