// Calculate sum of numbers in the given range.

#include<stdio.h>
int sum();
void main()
{
    int x;
    x=sum();
    printf("%d",x);
}
int sum()
{
    int i, no,sum = 0;
    printf("Enter the value of i :\n");
    scanf("%d",&i);
    printf("Enter the value of no :\n");
    scanf("%d",&no);

    while(i <= no)
    {
        sum = sum + i;
        i++;

    }
    //printf("%d",sum);
    return sum;
}