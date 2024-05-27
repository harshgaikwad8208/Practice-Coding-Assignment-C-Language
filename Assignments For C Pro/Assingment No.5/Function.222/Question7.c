// Find factorial of number.

#include<stdio.h>
int factorial();
void main()
{
    int a;
	a=factorial();
	printf("%d",a);
}
int factorial()
{
  int n,fact=1;
  printf("Enter n ");
  scanf("%d",&n);

  while (n)
   {
  fact=fact*n ;
  n--;
	}
//printf("factorial %d",fact);
return fact;
}
