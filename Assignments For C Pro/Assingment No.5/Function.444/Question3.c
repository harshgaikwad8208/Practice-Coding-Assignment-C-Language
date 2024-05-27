// Calculate sum of numbers in the given range.

#include<stdio.h>
int sum(int ,int);
void main()
{
    int i, no;
    printf("Enter the value of i :\n");
    scanf("%d",&i);
    printf("Enter the value of no :\n");
    scanf("%d",&no);

    int x;
    x=sum(i,no);
    printf("%d",x);
}
int sum(int i,int no)
{
    int sum = 0;
    while(i <= no)
    {
        sum = sum + i;
        i++;

    }
    //printf("%d",sum);
    return sum;
}