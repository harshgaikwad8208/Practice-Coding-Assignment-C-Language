//Find sum of all numbers.

#include<stdio.h>
int main()
{
    int arr[5];
    int i,sum=0;
    printf("Enter the number.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i =0; i<5; i++)
    {
        sum = sum+arr[i];
    }
    printf("Sum of the array is: %d",sum);
    

}
void main1()
{
    int b[5];
    int i = 0,sum= 0;
    printf("Enter the number.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i =0; i<5; i++)
    {
        sum = sum+b[i];
    }
    printf("Sum of the array is: %d",sum);
    
}