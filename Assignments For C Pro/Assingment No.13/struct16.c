#include <stdio.h>
struct Day
{
	int date;
	int month;
	int year;
};
void main()
{
	int i;
	struct Day arr[1];
	for(i=0;i<1;i++)
	{
		printf("Enter a date: ");
		scanf("%d",&arr[i].date);
		printf("Enter a month:");
		scanf("%d",&arr[i].month);
		printf("Enter a year: ");
		scanf("%d",&arr[i].year);
		
	}
	for(i=0;i<1;i++)
	{
		printf("%d is the day %d month and %d year today",arr[i].date,arr[i].month,arr[i].year);
	}
}