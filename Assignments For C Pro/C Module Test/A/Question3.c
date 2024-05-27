#include<stdio.h>
#include<string.h>
typedef struct List
{
    int TID;
    char description[100];
    char status[20];
}List;
void addTask(List*,int* );
void main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    List arr[size];
    int choice;

    do
    {
        printf("====== To-Do List ======\n");
        printf("1.Add Task\n");
        printf("2.Update Task\n");
        printf("3.Display Task\n");
        printf("4.Exit Task\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
            case 1:
                addTask(arr,&size);
                break;
            case 2:
                updateTask(arr,size);
                break;
            case 3:
                displayTask(arr,size);
            case 4:
                printf("Existing program.\n");
                break;
            default:
                printf("Invalid Choice.\n");
    }
    while(choice!=4);
}
void addTask(List* arr,int* size)
{
    printf("Enter task description.\n");
    scanf("%s",)
}