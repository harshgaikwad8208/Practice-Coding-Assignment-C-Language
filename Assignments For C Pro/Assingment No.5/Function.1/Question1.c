// Finding F from C (temp).


#include<stdio.h>

void temp();
void main()
{
    temp();
}
void temp()
{
    int c,f;
    printf("Enter the value:\n");
    scanf("%d",&c);
    f = c * 1.8 + 32;
    printf("The temp in fehrmheit is : %d\n",f);
}