// write a program to print details of the book.
#include<stdio.h>
#include<string.h>
struct book 
{
    char name[100];
    char Author_name[100];
    float price;
}book1;

int main()
{
    void detail();
    detail(book1);
    return 0;
}
void detail(struct book book1)
{
    strcpy(book1.name,"Mahabhart");
    printf("Name of the book is : %s\n ",book1.name);
    strcpy(book1.Author_name,"Ved Vyas");
    printf("Name of Author of the book is : %s\n",book1.Author_name);
    scanf("%f",&book1.price);
    printf("Price of the %s is : %f ",book1.name,book1.price);
    printf("id : 24CE142 \n");
    printf("NAME : VIRDA MAHAVIR ");
}