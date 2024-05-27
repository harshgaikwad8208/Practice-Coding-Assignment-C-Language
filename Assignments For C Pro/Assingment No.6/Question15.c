#include<stdio.h>
void  factorial(int*);
void main()
{
    int a,n;
     printf("Enter n ");
    scanf("%d",&n);
	factorial(&n);
	//printf("%d",a);
}
void factorial(int *n)
{
  int fact=1;
  while (*n)
  {
  fact=fact* *n ;
  *n--;
	}
	printf("factorial %d",fact);
	//return fact;
}
