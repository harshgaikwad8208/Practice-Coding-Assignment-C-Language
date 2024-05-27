#include<stdio.h>
void rangeprime(int*);
void main()
{
	int k;
	for( k=1;k<100;k++)
	rangeprime(&k);
}
	void rangeprime(int *k)
	{
{
	int n,temp=0;

	int i;
	  for ( i=1;i< *k;i++)
	{
    	if (*k%i==0)
    	{
    	temp++;
     
    	}
    }
  		if (temp==1)
	{
    	printf("%d is prime number\n ",*k);
	}
		else
	{
    	printf("%d is not an prime number\n ",*k);
	}
	}
}
