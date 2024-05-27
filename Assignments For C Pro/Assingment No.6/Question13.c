#include <stdio.h>
int primt();
void main ()
{
	int a,l;
	printf("Enter a");
	scanf("%d",&a);
	l=	primt(a);
}
	int primt(int a)
{
	int fact=0;

	for (int i = 1;i<=a ; i++)
	{
    	if (a%i==0)
		{
        fact++;
    	}
 	}	 
 	if (fact==2)
	{
    	printf("this is prime number ");
	}
	else
	{
    	printf("this is not an prime number ");
	}
	//return fact;

}
