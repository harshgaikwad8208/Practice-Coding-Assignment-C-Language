// Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
int great(int a, int b, int c);
int main()
{
    int x,y,z;
    printf("Enter the value of a:\n");
    scanf("%d",&x);
    printf("Enter the value of b:\n");
    scanf("%d",&y);
    printf("Enter the value of c:\n");
    scanf("%d",&z);
    int v;
    v=great(x,y,z);
    if(v==1)
    {
        printf("a is max");
    }
    if(v==0)
    {
        printf("b is max");
    }
    if(v==2)
    {
        printf("c is max");
    }
}
int great(int a,int b,int c)
{
    

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