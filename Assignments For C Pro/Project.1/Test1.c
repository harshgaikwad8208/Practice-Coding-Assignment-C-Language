//Book store management.
#include<stdio.h>
#include<string.h>
typedef struct book 
{
    int bid;
    char name[20];
    int price;
    char author[20];
}Book;
void store(Book* arr,int);
void display(Book* arr,int);
void main()
{
    int size = 0,choice = 0;   
    printf("Enter the size: \n");
    scanf("%d",&size);
    Book arr[size];
    do
    {
        printf("Book management system: \n");
        printf("1:Store\n2:Display\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                store(arr,size);
                break;
            case 2:
                display(arr,size);
                break;
        }
        
    } 
    while (!0);
    
}
void store(Book* arr,int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Enter book id: ");
        
        scanf("%d",&arr->bid);
        printf("Enter book name: ");
        fflush(stdin);
        scanf("%s",&arr->name);

        printf("Enter book price: ");
        scanf("%d",&arr->price);

        printf("Enter book author name: ");
        fflush(stdin);
        scanf("%s",&arr->author);
    }

}
void display(Book* arr,int size)
{
    printf("Book information: \n");
    printf("+-------------------------------------+\n");
    printf("|  BID  |  Name  |  Price  |  Author  |\n");
    printf("+-------------------------------------+\n");
    for(int i = 0; i < size; i++)
    {
        
        printf("|  %d  |  %s  |  %d  |  %s  |",arr[i].bid,arr[i].name,arr[i].price,arr[i].author);
    }
}


