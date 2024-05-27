#include <stdio.h>
void numtablet1(int*);

void main ()
{
	int n;
	printf("Enter value of  n ");
	scanf("%d",&n);
	numtablet1(&n);
}
	void numtablet1(int *n)
{
	int i;
	for ( i = 1; i <= 10; i++)
	{
   printf(" %d \n ",*n*i);
   }
}
