// Check number is perfect or not.

#include <stdio.h>
int perfect();
void main ()
{
    int k;

	k=perfect();
	if (k==1)
	{
   printf("its is perfect number");
	}
else if (k==0)
	{
   printf("its is not perfect");
	}
else 
	{
    printf("invalid ");
	}
}
int perfect()
{
   int sum=0,n,a;
   printf("Enter n ");
   scanf("%d",&n);
   a=n;
	for (int i = 1; i < n; i++)
	{
 if (n%i==0)
		{
 sum=sum+i;
		}
	}
 printf("%d",sum);
 if (a==sum)
	{
return 1;
//printf("its is perfect number");
	}
else
	 {
 // printf("its is not perfect");
return 0;
	}
}
