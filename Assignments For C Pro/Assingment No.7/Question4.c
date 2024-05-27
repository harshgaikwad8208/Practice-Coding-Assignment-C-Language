//Find odd and even among the numbers.

#include<stdio.h>
void main()
{
    int b[5];
    int i = 0;
    printf("Enter the number.\n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Even numbers in the array are: \n");
   for(i=0; i<5; i++)
   {
     if(b[i]%2==0)
     printf("%d ", b[i]);
   }

   printf("\nOdd numbers in the array are: \n");
   for(i=0; i<5; i++)
   {
     if(b[i]%2!=0)
     printf("%d ", b[i]);
   }

    
    
    
}
