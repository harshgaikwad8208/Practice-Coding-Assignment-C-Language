// Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
int great();
int main()
{
    int x;
    x=great();
    if(x==1)
    {
        printf("a is max");
    }
    if(x==0)
    {
        printf("b is max");
    }
    if(x==2)
    {
        printf("c is max");
    }
}
int great()
{
    int a,b,c;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("Enter the value of c:\n");
    scanf("%d",&c);

    if(a>c && a>b)
    {
        return 1;
        //printf("a is max");
    }
    if(b>a && b>c)
    {
        return 0;
        //printf("b is max");
    }
    if(c>a && c>b)
    {
        return 2;
        //printf("c is max");
    }
    }