#include <stdio.h>
void add(int*);
void main ()
{
	int a;
	printf("Enter Vlaue Of a ");
	scanf("%d",&a);
    add(&a);
}
	void add(int *a)
	{
		int rem,rev,k,sum=0;
		rev=0;
	    rem= *a%10;
  
	while (*a>1)
	{
    	*a= *a/10;
    
	}
		sum=rem+ *a;
	printf(" your sum is %d\n",sum);
	

}
