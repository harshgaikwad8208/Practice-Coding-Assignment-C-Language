// Check the given number is palindrome or not?

#include <stdio.h>
int palidrome();
void main ()
{
    int k;
	k=palidrome();
	if (k==1)
	{
    printf(" its an palidrome number");
	}
else {
        printf(" Not an palidrome number");
	}
}
int palidrome()
{
	int a,rem,rev,z;
	rev=0;
	printf("Enter Vlaue Of a ");
	scanf("%d",&a);
	z=a;
	while (a>0)
	{
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;    
	}
	/*printf(" your rem is %d\n",rem);
	printf(" your rev is %d\n",rev);*/
if(rev==z)
	{
	//printf("%d an palidrome number",rev);
    return 1;
	}
	else
	{
        return 0;
		//printf("%d Not an palidrome number",rev);
	}

}
