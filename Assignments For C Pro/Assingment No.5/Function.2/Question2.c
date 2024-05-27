// Finding area and perimeter of rectangle or circle.

#include<stdio.h>
int rect();
int act();
void main()
{
    int x,y;
    x=rect();
    printf("The area is rectangle is : %d\n",x);
    y=act();
    printf("The perimeter is rectangle is : %d\n",y);
}
int rect()
{
    int length;
    printf("\nEnter the length: \n");
    scanf("%d",&length);

    int breadth;
    printf("Enter the breadth: \n");
    scanf("%d",&breadth);

    int area = length * breadth;
   // printf("The area is rectangle is : %d\n",area);
   return area;

}
int act()
{
    int length;
    printf("Enter the length: \n");
    scanf("%d",&length);

    int breadth;
    printf("Enter the breadth: \n");
    scanf("%d",&breadth);

    int perimeter = 2 * (length + breadth);
    //printf("The perimeter is rectangle is : %d",perimeter);
    return perimeter;
}