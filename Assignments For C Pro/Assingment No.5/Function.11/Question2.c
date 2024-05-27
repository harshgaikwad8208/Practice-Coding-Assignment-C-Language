// Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
void great();
void main()
{
    great();
}
void great()
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
        printf("a is max");
    }
    if(b>a && b>c)
    {
        printf("b is max");
    }
    if(c>a && c>b)
    {
        printf("c is max");
    }
    }