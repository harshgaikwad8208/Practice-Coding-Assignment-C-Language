// Finding F from C (temp).


#include<stdio.h>

void temp(int*);
void main()
{
    int a;
    printf("Enter the value:\n");
    scanf("%d",&a);
    temp(&a);
}
void temp(int*c)
{
    int f=0;
    f = (*c) * 1.8 + 32;
    printf("The temp in fehrmheit is : %d\n",f);
}
