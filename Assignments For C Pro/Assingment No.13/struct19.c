#include <stdio.h>
struct Complex
{
	int real;
	int imaginary;
};
void main()
{
	int i;
	struct Complex arr[1];
	for(i=0;i<1;i++)
	{
		printf("Enter a real no: ");
		scanf("%d",&arr[i].real);
		printf("Enter the imaginary number:");
		scanf("%d",&arr[i].imaginary);
	
	}
	for(i=0;i<1;i++)
	{
		printf("The real is %d and imaginary number is %di",arr[i].real,arr[i].imaginary);
	}
}