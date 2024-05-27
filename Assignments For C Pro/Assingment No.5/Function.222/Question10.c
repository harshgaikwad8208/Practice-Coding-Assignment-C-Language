// Add the (first and last) digit of a given number?

#include <stdio.h>
int add();
void main ()
{
    int k;
    k=  add();
    printf("%d",k);
}
int add()
{
	int a,rem,rev,k,sum=0;
	rev=0;
	printf("Enter Vlaue Of a ");
	scanf("%d",&a);

    rem=a%10;
  
	while (a>1)
	{
   	 a=a/10;
    
	}
	
sum=rem+a;

return sum;
}
