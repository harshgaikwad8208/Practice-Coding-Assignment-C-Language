// Print table for the given number.

#include<stdio.h>
void table(int num,int j);
void main()
{
    int nu;
    int j = 1;
    printf("Enter the number\n");
    scanf("%d",&nu);
    table(nu,j);
}
void table(int num,int i)
{
    
    while( i <= 10)
    {
        printf("%d x %d = %d\n",num,i,num * i);
        i++;
    }

}