//Reverse the given array.

#include<stdio.h>
void reverse(int*, int);
void main()
{
    int b[5];
    int* ptr;
    ptr = b;
    reverse(b,5);  
}
void reverse(int* b, int n)
{
    int i = 0;
    printf("Enter the no.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("This is the reverse number.\n");
        printf("\n%d",b[i]);
    }
}