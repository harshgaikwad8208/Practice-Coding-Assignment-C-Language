// Print numbers from 1 to 10.

#include<stdio.h>
void numbers();
void main()
{
    numbers();
}
void numbers()
{
    int num = 1;
    while(num <= 10)
    {
        printf("%d\n",num);
        num++;
    }
    
}