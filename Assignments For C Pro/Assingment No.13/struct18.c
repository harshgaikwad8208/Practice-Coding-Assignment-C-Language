#include <stdio.h>
struct Distance
{
	int feet;
	int inch;
};
void main()
{
	int i;
	struct Distance arr[1];
	for(i=0;i<1;i++)
	{
		printf("Enter a feet: ");
		scanf("%d",&arr[i].feet);
		printf("Enter a inch:");
		scanf("%d",&arr[i].inch);
	
	}
	for(i=0;i<1;i++)
	{
		printf("The feet is %d and inch is %d",arr[i].feet,arr[i].inch);
	}
}