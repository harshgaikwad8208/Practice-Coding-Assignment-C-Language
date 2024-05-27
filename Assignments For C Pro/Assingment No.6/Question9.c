#include <stdio.h>
void mul(int*,int*);
void mode(int*,int*);
void div(int*,int*);
void sub(int*,int*);
void add(int*,int*);

void main()
{
	char op;
	int a,b;
	printf("enter operator ");
scanf("%c",&op);

 if(op=='+')
 {
	printf("enter a ");
scanf("%d",&a);
	printf("Enter value of b ");
	scanf("%d",&b);
 	add(&a,&b);
			}
else if(op=='-')
{
	printf("enter a ");
scanf("%d",&a);
	printf("Enter value of b ");
	scanf("%d",&b);
 	sub(&a,&b);
			}
else if(op=='/')
{
	printf("enter a ");
scanf("%d",&a);
	printf("Enter value of b ");
	scanf("%d",&b);
 	div(&a,&b);
			}
else if(op=='%')
{
	printf("enter a ");
scanf("%d",&a);
	printf("Enter value of b ");
	scanf("%d",&b);
 	mode(&a,&b);
			}
else if(op=='*')
{
	printf("enter a ");
scanf("%d",&a);
	printf("Enter value of b ");
	scanf("%d",&b);
 	mul(&a,&b);
			}
		
}
void add(int *a,int *b)
{
int c;
	c=*a+ *b;
	printf("%d",c);
}
void sub(int *a,int *b)
{
int c;

	c=*a- *b;
	printf("%d",c);
}
void div(int *a,int *b)
{
int c;
	
	c=*a/ *b;
	printf("%d",c);
}
void mode(int *a,int *b)
{
int c;

	c=*a% *b;
	printf("%d",c);
}
void mul(int *a,int *b)
{
int c;
	
	c=*a* *b;
	printf("%d",c);
}
