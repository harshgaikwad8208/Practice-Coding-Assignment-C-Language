// Print table for the given number.

#include<stdio.h>
void table(int);
void main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    table(num);
}
void table(int num)
{
   
    int i = 1;
    
    while( i <= 10)
    {
        printf("%d x %d = %d\n",num,i,num * i);
        i++;
    }

}