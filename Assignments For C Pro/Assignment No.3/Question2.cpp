// Print table for the given number.

#include<stdio.h>
int main()
{
    int num;
    int i = 1;
    printf("Enter the number\n");
    scanf("%d",&num);
    while( i <= 10)
    {
        printf("%d x %d = %d\n",num,i,num * i);
        i++;
    }

}