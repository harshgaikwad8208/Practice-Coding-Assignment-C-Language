#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[20];
    double marks;
};
void store(struct student* ,int );
void main()
{ 
    struct student arr[3];
    store(arr,3);
}
void store(struct student* arr,int size)
{

    int i;
    for(i = 0; i < size; i++)
    {
        printf("Enter roll no: \n");
        scanf("%d",&arr[i].roll);

        printf("Enter name: \n");
        scanf("%s",&arr[i].name);

        printf("Enter marks:\n");
        scanf("%d",&arr[i].marks);
    }
    for(i = 0; i < size; i++)
    {
        printf("roll number %d name of the student %s marks is %d. ",arr[i].roll,arr[i].name,arr[i].marks);
    }
}