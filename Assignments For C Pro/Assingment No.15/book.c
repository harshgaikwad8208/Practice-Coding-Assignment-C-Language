//Create a structure Book with data members as bname, id, author, price. Accept the values of all these members from user and display them
#include <stdio.h>

struct Book {
    char bname[100];
    int id;
    char author[100];
    float price;
};
struct book store(struct book* )
struct book store(struct book* )
int main() 
{
    struct Book s1,s2;
	store(&s1);
    store(&s1);
    printf("Book Details:\n");
    printf("Book Name: %s\n", s1.bname);
    printf("Price: $%.2f\n", s1.price);

    printf("Book Name: %s\n", s2.bname);
    printf("Price: $%.2f\n", s2.price);

}
struct book store(struct book* this)
{
    printf("Enter book name: ");
    gets(&this->name);

    printf("Enter price: ");
    scanf("%f", &this->price);
}
