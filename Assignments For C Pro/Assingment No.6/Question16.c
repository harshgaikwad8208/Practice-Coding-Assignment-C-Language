#include<stdio.h>
void strongg(int*);
void main()
{
	int n;
	printf(" Enter num");
    scanf("%d",&n);
	strongg(&n);
}
	void strongg(int *n)
{
	  int r ,h,fact,strong=0,z;
  
		z= *n;
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
  		
  	}
		
 	if(strong==h)
	 {
 	printf("this is an strong number");
	}
	
	else
	printf("this not an strong number");
 }  
