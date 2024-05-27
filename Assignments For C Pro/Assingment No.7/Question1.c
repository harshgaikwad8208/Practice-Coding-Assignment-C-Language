// Find minimum and maximum number in array.

#include<stdio.h>
int main()
{
    int i;
    int b[5];
    printf("Enter the number.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }
    
    int max=-999;
    int min=999;
    for(i=0;i<=5;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
        if(min>b[i])
        {
            min=b[i];
        }
    }

    printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);


}
void main1()
{
    int b[5];
    int i = 0;
    int min,max;
    printf("Enter the number.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }

    min=max=b[0];
    for(i=0; i<5;i++)
    {
        if(min>b[i])
        min=b[i];
            if(max<b[i])
            max=b[i];
    }
    printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
    
}