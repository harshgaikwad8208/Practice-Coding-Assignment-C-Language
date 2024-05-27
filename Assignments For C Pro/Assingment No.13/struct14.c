#include<stdio.h>
#include<string.h>
struct WashingMachine
{
    char name[50];
    double price;
    double capacity;
    double model;
};
void main()
{
    struct WashingMachine arr[3];
    int i =0;
    for(i = 0; i < 1; i++)
    {
        printf("Enter the name of WashingMachine:\n");
        scanf("%s",&arr[i].name);

        printf("Enter the price: \n");
        scanf("%d",&arr[i].price);
        
        printf("Enter the capacity : \n");
        scanf("%d",&arr[i].capacity);

        printf("Enter the model no: \n");
        scanf("%d",&arr[i].model);
    }
    for(i = 0; i < 1; i++)
    {
        printf("The %s are the name of the %d capacity of WashingMachine and price is %d and model number is %d.",arr[i].name,arr[i].capacity,arr[i].price,arr[i].model);
    }
}