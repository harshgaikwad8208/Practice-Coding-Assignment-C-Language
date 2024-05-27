// Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

#include<stdio.h>
int ope(int no1,int no2,int result,char op);
void main()
{
    int n,nn,res,x;
    char opp;
    printf("Enter the value of no1:\n");
    scanf("%d",&n);
    printf("Enter the value of no2:\n");
    scanf("%d",&nn);

    printf("Enter an operator (+,-,*,/,%%):\n ");
    fflush(stdin);
    scanf("%c",&opp);
    x=ope(n,nn,res,opp);
    printf("The answer is %d",x);
}
int ope(int no1,int no2,int result,char op)
{
    

    if(op == '+')
    {
        result = no1+no2;
        return result;
    }
    if(op == '-')
    {
        result = no1-no2;
        return result;
    }
    if(op == '*')
    {
        result = no1*no2;
        return result;
    }
    if(op == '/')
    {
        result = no1/no2;
        return result;
    }
    if(op == '%')
    {
        result = no1%no2;
        return result;
    }

}