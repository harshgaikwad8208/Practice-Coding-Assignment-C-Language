#include <stdio.h>
int add();
void main (){
    int k,a;
    printf("Enter Vlaue Of a ");
scanf("%d",&a);
  k=  add(a);
  printf("%d",k);
}
int add(int a){
int rem,rev,k,sum=0;
rev=0;

    rem=a%10;
  
while (a>1)
{
    a=a/10;
    
}
sum=rem+a;
return sum;
//printf(" your sum is %d\n",sum);
/*printf(" your rev is %d\n",rev);
printf(" your a is %d\n",a);*/

}