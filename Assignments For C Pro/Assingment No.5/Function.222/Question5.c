#include <stdio.h>
#include <math.h>

int armstrong();

void main()
{
	//	int a,b;
	int h;
/*	printf("enter no a ");
	scanf("%d",&a);
	b=	armstrong(a);
	printf("%d",b);*/
	h=armstrong();
	if(h==1)
	{
		printf("your value is armstrong");
	}

}
int armstrong()
{
 int n, r,k,  fact=0, sum=0;

  /*  printf("Enter first no: ");
    scanf("%d", &f);
    printf("Enter last no: ");
    scanf("%d", &l);*/
//for(int k=1;k<500;k++){

	 printf("Enter no: ");
    scanf("%d", &k);
    
	fact=0;
	sum=0;
    n = k;
    
    while (n != 0) 
	{
        ++fact;
             n=n/10;
    }

    n = k;
    while (n > 0)
	{
        r = n % 10;
        sum =sum+ pow(r, fact);
        n=n/10;
    }
	if(sum == k)
	{
     //printf("%d\n",k);
    return 1;
    } 
}






