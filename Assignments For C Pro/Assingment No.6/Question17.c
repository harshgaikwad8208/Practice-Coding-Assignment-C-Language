#include <stdio.h>
void palidrome(int*);
void main ()
{
    int a;
    printf("Enter Vlaue Of a ");
	scanf("%d",&a);
   
	palidrome(&a);
	
}
	void palidrome(int *a)
{
	int rem,rev,z;
	rev=0;
	z= *a;
	while (*a>0)
	{
    rem= *a%10;
    rev=rev*10+rem;
    *a= *a/10;
     
	}
	/*printf(" your rem is %d\n",rem);
	printf(" your rev is %d\n",rev);*/
	if(rev==z)
	{
	printf("%d an palidrome number",rev);
  	//  return 1;
	}
	else
	{
       // return 0;
		printf("%d Not an palidrome number",rev);
	}

}


