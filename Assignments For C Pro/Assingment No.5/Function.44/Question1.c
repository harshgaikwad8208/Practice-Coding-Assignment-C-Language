// Find the price of item when discount is given (specify different discount based on price)

#include<stdio.h>
int disc(int);
int main()
{
    int pri;
    printf("Enter the price of product:\n");
    scanf("%d",&pri);
    int x;
    x = disc(pri);
    printf("The new price of product after discount is %d.",x);
}
int disc(int price)
{
    

    if(price >= 0 && price <= 1000)
    {
        int discount = price*2.25;
        int newprice = price-discount;
        return newprice;
        //printf("The new price of product after discount is %d.",newprice);
    }
    if(price <= 1000 && price <= 2000)
    {
        int discount = price*0.30;
        int newprice = price - discount;
        return newprice;
        //printf("The new price of product after discount is %d.",newprice);
    }
    else
    {
        int discount = price *0.50;
        int newprice = price-discount;
        return newprice;
        //printf("The new price of product after discount is %d.",newprice);

    }
}