#include <stdio.h>
void  perfect(int*);
void main ()
{
    int k;
	perfect(&k);
	
}
	void  perfect(int *k)
{
   int sum=0,n,a;
   printf("Enter n ");
   scanf("%d",&n);
   a=n;
   int i;
	for ( i = 1; i < n; i++)
	{
	 if (n%i==0)
		{
 		sum=sum+i;
		}	
	}
 		printf("%d",sum);
 		if (a==sum)
		{//return 1;
		printf(" is perfect number");
		}		
	else 
	{
  	printf(" is not perfect");
	//return 0;

	}
}
