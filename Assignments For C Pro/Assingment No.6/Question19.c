#include <stdio.h>
#include <math.h>
void rangearm(int*);
void main()
{
	int k;
	for( k=1;k<500;k++)
	rangearm(&k);
}
	void rangearm(int *k){
	
    int n, a, r, f,  l, fact=0, sum=0;
	

		fact=0;
		sum=0;
	    n = *k;
	    while (n != 0) 
	{
	        ++fact;
             n=n/10;
    }

    	n = *k;
    	while (n > 0) {
        r = n % 10;
        sum += pow(r, fact);
        n /= 10;
    }
		if(sum == *k) {
        printf("%d\n",*k);
    } 
	
}

