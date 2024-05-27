// Finding area and perimeter of rectangle or circle.

#include<stdio.h>
int rect(int , int);
int act(int,int);
void main()
{
    int x,y;
    int len;
    printf("Enter the length: \n");
    scanf("%d",&len);

    int bre;
    printf("Enter the breadth: \n");
    scanf("%d",&bre);

    x=rect(len,bre);
    printf("The area is rectangle is : %d\n",x);
    y=act(len,bre);
    printf("The perimeter is rectangle is : %d",y);
}
int rect(int length,int breadth)
{
    
    int area = length * breadth;
    

    return area;

}
int act(int length,int breadth)
{
    int perimeter = 2 * (length + breadth);
    return perimeter;
}