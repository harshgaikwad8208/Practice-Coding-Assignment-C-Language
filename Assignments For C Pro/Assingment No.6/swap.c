#include<stdio.h>
void fun(int*,int*);
void main()
{
    int a=10;
    int b=20;
   
    fun(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
}
void fun(int*a,int*b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    
}