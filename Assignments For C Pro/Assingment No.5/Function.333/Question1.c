// Print numbers from 1 to 10.

#include<stdio.h>
void numbers();
void main()
{
    int num = 1;
    numbers(num);
}
void numbers(int num)
{
    
    while(num <= 10)
    {
        printf("%d\n",num);
        num++;
    }
    
}