#include<stdio.h>
#include<string.h>
struct employee
{
    double id;
    char name[50];
    char company[50];
    double salary;
};
void store(struct employee* ,int );
void main()
{
    struct employee arr[3];
    store(arr,3);
    
}
void store(struct employee* arr,int size)
{
    int i = 0;
    for(i = 0; i < 1; i++)
    {
        printf("Enter the id number:\n");
        scanf("%d",&arr[i].id);

        printf("Enter the name of employee: \n");
        scanf("%s",&arr[i].name);
        
        printf("Enter the company name: \n");
        scanf("%s",&arr[i].company);

        printf("Enter the salary: \n");
        scanf("%d",&arr[i].salary);
    }
    
    for(i = 0; i < 1; i++)
    {
        printf("name is %s id is %d in %s this company and salary %d.",arr[i].name,arr[i].id,arr[i].company,arr[i].salary);
    }
}