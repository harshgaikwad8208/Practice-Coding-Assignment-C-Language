#include <stdio.h>

void calculateDiscountedPrice(float*);
void main()
{
	float itemPrice;

    printf("Enter the price of the item: ");
    scanf("%f", &itemPrice);

    calculateDiscountedPrice(&itemPrice);
}
void calculateDiscountedPrice(float *price) 
{
    float discountedPrice;

    if (*price < 500) 
	{
        discountedPrice = *price - (0.05 * *price);
    } 
	else if (*price < 1000) 
	{
        discountedPrice = *price - (0.10 * *price);
    } 
	else
	 {
        discountedPrice = *price - (0.15 * *price);
    }

    printf("Discounted price: %.2f\n", discountedPrice);
}


