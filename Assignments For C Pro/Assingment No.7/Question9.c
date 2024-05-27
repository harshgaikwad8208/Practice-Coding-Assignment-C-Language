//Reverse the given array.

#include<stdio.h>
void main()
{
    int b[5];
    int i = 0;
    printf("Enter the topper roll no.\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("\n%d",b[i]);
    }
}