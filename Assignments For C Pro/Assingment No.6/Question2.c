// Finding area and perimeter of rectangle or circle.

#include<stdio.h>
void rect(int* , int*);
void main()
{
    int len;
    printf("Enter the length: \n");
    scanf("%d",&len);

    int bre;
    printf("Enter the breadth: \n");
    scanf("%d",&bre);

    rect(&len,&bre);
}
void rect(int* length,int* breadth)
{
    
    int area = *length * *breadth;
    printf("The area is rectangle is : %d\n",area);

    int perimeter = 2 * (*length + *breadth);
    printf("The perimeter is rectangle is : %d",perimeter);

}