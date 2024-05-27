// Check number is strong or not.

#include<stdio.h>
int strongg();
void main()
{
	int k;
	k=strongg();
	if(k==1)
	{
 	printf("this is an strong number");
	}
	else
	printf("this not an strong number");
}   
	
int strongg()
{
  int n , r ,fact,strong=0,z;
  printf(" Enter n");
  scanf("%d",&n);
  z=n;
	while (z)
	{
	fact=1;
	
	r=z%10;
  	while (r)
  	{
    fact=fact*r;
    r--;
 
	}
	strong=strong+fact;
    z=z/10;
  	//  printf("%d",fact);
  	}
	//printf("%d",fact);
	return 1;
 
}