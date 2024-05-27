#include<stdio.h>
void main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("\nvalue of a %d",a);
    printf("\naddress of a %u",&a);
    printf("\nvalue of ptr %u",ptr);
    printf("\nadress of ptr %u",&ptr);

}
