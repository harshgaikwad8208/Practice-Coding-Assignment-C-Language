#include<stdio.h>
#include<string.h>
struct employee
{
    char name[50];
    double salary;
};
struct employee store(struct employee* );
void employee(struct employee* );
void main()
{
    struct employee s1,s2;
    store(&s1);
    store(&s2);
    printf("%s %d\n",s1.name,s1.salary);
    printf("%s  %d",s2.name,s2.salary);
    
}
struct employee store(struct employee* this)
{
    int i = 0;
    for(i = 0; i < 1; i++)
    {

        printf("Enter the name of employee: \n");
        scanf("%s",&this->name);
        

        printf("Enter the salary: \n");
        scanf("%d",&this->salary);
    }
    
}