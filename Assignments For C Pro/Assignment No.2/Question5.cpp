// Accept the price from user. Ask the user if he is a student (user may say yes or no). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%. But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.

#include<stdio.h>
int main()
{
    int price,pur,discount,finalprice;
    char ch;
    
    printf("Enter the price:\n");
    scanf("%d",&price);

    printf("If student press (y) otherwise press (n) :\n");
    fflush(stdin);
    scanf("%c",&ch);
    

    if(ch == 'y')
    {
        
        if(price>500)
        {

            discount = 0.20*price;
            finalprice = price - discount;
            printf("%d",finalprice);
        }

        else
        {
            
            discount = 0.10*price;
            finalprice = price - discount;
            printf("%d",finalprice);
        }
        
    }
    if(ch == 'n')
        {
          discount = 0.10*price;
          finalprice = price - discount;
          printf("%d",finalprice);
        }
}