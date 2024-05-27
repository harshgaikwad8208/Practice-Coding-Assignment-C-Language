#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[20];
};
struct student storeStudent(struct student* );
struct student storeStudent(struct student* );

void main()
{
    
    struct student s1,s2;
    storeStudent(&s1);
    storeStudent(&s2);
    printf("%d %s\n\n",s1.roll,s1.name);
    printf("%d  %s",s2.roll,s2.name);
}
struct student storeStudent(struct student* this)
{
    printf("Enter the roll:- ");
    scanf("%d",&this->roll);

    printf("Enter the name:- ");
    scanf("%s",&this->name);

}