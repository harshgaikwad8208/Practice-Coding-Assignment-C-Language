#include<stdio.h>
#include<string.h>
struct AC
{
    char name[50];
    double price;
    char company[50];
    double model;
};
void main()
{
    struct AC arr[3];
    int i =0;
    for(i = 0; i < 1; i++)
    {
        printf("Enter the name of AC:\n");
        scanf("%s",&arr[i].name);

        printf("Enter the price: \n");
        scanf("%d",&arr[i].price);
        
        printf("Enter the company name: \n");
        scanf("%s",&arr[i].company);

        printf("Enter the model no: \n");
        scanf("%d",&arr[i].model);
    }
    for(i = 0; i < 1; i++)
    {
        printf("The %s are the name of the %s company AC and price is %d and model number is %d.",arr[i].name,arr[i].company,arr[i].price,arr[i].model);
    }
}