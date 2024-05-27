// Finding F from C (temp).


#include<stdio.h>

int temp(int,int);
int main()
{
    int x,y;
    int v;
    printf("Enter the value:\n");
    scanf("%d",&x);
    v=temp(x,y);
    printf("The temp in fehrmheit is : %d\n",v);
}
int temp(int c, int f)
{
    
    f = c * 1.8 + 32;
    return f;
    //printf("The temp in fehrmheit is : %d\n",f);


}