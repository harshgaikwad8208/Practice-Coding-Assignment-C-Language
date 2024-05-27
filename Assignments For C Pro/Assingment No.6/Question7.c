// Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
void great(int* a,int* b,int* c);
void main()
{
    int x,y,z;
    printf("Enter the value of a:\n");
    scanf("%d",&x);
    printf("Enter the value of b:\n");
    scanf("%d",&y);
    printf("Enter the value of c:\n");
    scanf("%d",&z);
    
    great(&x,&y,&z);
   
}
void great(int* a,int* b,int* c)
{
    

    if(*a>*c && *a>*b)
    {
        
        printf("a is max");
    }
    if(*b>*a && *b>*c)
    {
        
        printf("b is max");
    }
    if(*c>*a && *c>*b)
    {
        
        printf("c is max");
    }
}