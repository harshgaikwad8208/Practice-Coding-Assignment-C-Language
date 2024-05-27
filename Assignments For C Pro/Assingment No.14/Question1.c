//Create a structure Book with data members as bname, id, author, price. Accept the values of all these members from user and display them
#include <stdio.h>

struct Book {
    char bname[100];
    int id;
    char author[100];
    float price;
};

int main() {
    struct Book myBook;

    
    printf("Enter book name: ");
    gets(myBook.bname);

    printf("Enter book ID: ");
    scanf("%d", &myBook.id);

    printf("Enter author: ");
    getchar(); 
    gets(myBook.author);

    printf("Enter price: ");
    scanf("%f", &myBook.price);


    printf("Book Details:\n");
    printf("Book Name: %s\n", myBook.bname);
    printf("Book ID: %d\n", myBook.id);
    printf("Author: %s\n", myBook.author);
    printf("Price: $%.2f\n", myBook.price);

    return 0;
}
