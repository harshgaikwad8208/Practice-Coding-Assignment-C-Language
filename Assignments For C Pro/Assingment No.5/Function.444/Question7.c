#include<stdio.h>
int factorial();
void main(){
    int a,n;
     printf("Enter n ");
  scanf("%d",&n);
a=factorial(n);
printf("%d",a);
}
int factorial(int n){
  int fact=1;
 

  while (n)
  {
  fact=fact*n ;
  n--;
}
//printf("factorial %d",fact);
return fact;
}
