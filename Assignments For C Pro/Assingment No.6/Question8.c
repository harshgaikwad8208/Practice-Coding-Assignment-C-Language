// Print numbers from 1 to 10.

#include<stdio.h>
void numbers(int*);
void main()
{
    int nu = 1;
    numbers(&nu);
}
void numbers(int* num)
{
   
    while(*num <= 10)
    {
        printf("%d\n",*num);
        *num++;
    }
    
}