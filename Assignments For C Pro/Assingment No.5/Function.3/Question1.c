// Finding F from C (temp).


#include<stdio.h>

void temp(int,int);
void main()
{
    int a,b;
    printf("Enter the value:\n");
    scanf("%d",&a);
    temp(a,b);
}
void temp(int c,int f)
{
    
    f = c * 1.8 + 32;
    printf("The temp in fehrmheit is : %d\n",f);
}