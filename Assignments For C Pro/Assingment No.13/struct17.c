#include <stdio.h>
struct Time
{
	int hours;
	int mins;
	int seconds;
};
void main()
{
	int i;
	struct Time arr[1];
	for(i=0;i<1;i++)
	{
		printf("Enter a hours: ");
		scanf("%d",&arr[i].hours);
		printf("Enter a mins:");
		scanf("%d",&arr[i].mins);
		printf("Enter a seconds: ");
		scanf("%d",&arr[i].seconds);
		
	}
	for(i=0;i<1;i++)
	{
		printf("The time is %d hours,%d mins,%d seconds",arr[i].hours,arr[i].mins,arr[i].seconds);
	}
}