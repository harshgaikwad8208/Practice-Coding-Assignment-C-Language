// Finding area and perimeter of rectangle or circle.

#include<stdio.h>
int main()
{
    int length;
    printf("Enter the length: \n");
    scanf("%d",&length);

    int breadth;
    printf("Enter the breadth: \n");
    scanf("%d",&breadth);

    int area = length * breadth;
    printf("The area is rectangle is : %d\n",area);

    int perimeter = 2 * (length + breadth);
    printf("The perimeter is rectangle is : %d",perimeter);

    return 0;
}