// Finding F from C (temp).

#include<stdio.h>
int temp();
int main()
{
    int x;
   x = temp();
   printf("The temp in fehrmheit is : %d\n",x);
}
int temp()
{
    int c,f;
    printf("Enter the value:\n");
    scanf("%d",&c);
    f = c * 1.8 + 32;
   // printf("The temp in fehrmheit is : %d\n",f);   
    return f;
}