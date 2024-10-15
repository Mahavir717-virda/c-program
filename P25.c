// write a program to check book in library is issued or not.
#include<stdio.h>
#include<string.h>
#define  accession_no_book1 1
#define  accession_no_book2 2
#define  accession_no_book3 3

union book 
{
    char name[100];
    char Author_name[100];
    float price;
}book1,book2,book3;

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    
    void detail1();
    detail1(book1,n);

    printf("ID : 24CE142 \n");
    printf("NAME : VIRDA MAHAVIR ");
    return 0;
}
void detail1(union book book1,int n)
{
     printf("\n \n");
    strcpy(book1.name,"Mahabhart");
    printf("Name of the book is : %s\n ",book1.name);
    strcpy(book1.Author_name,"Ved Vyas");
    printf("Name of Author of the book is : %s\n",book1.Author_name);
    printf("Price of the %s is : 100.00\n",book1.name);

    if(accession_no_book1 == n)
    {
        printf("Book is issued.\n");
    }
    else 
    {
         printf("Book is not issued.\n");
    }

   void detail2();
   detail2(book2,n);
}

void detail2(union book book2,int n)
{
     printf("\n \n");
    strcpy(book2.name,"Ramayan");
    printf("Name of the book is : %s\n ",book2.name);
    strcpy(book2.Author_name,"Valmiki");
    printf("Name of Author of the book is : %s\n",book2.Author_name);
    printf("Price of the %s is : 100.00\n ",book2.name);

if(accession_no_book2 == n)
    {
        printf("Book is issued.\n");
    }
    else 
    {
         printf("Book is not issued.\n");
    }
    
    void detail3();
    detail3(book3,n);
}

void detail3(union book book3,int n)
{
    printf("\n \n");
    strcpy(book3.name,"RamcharitManas");
    printf("Name of the book is : %s\n ",book3.name);
    strcpy(book3.Author_name,"Mahakavi Tulsi Das");
    printf("Name of Author of the book is : %s\n",book3.Author_name);
    printf("Price of the %s is : 100.00 \n",book3.name);

    if(accession_no_book3 == n)
    {
        printf("Book is issued.\n");
    }
    else 
    {
         printf("Book is not issued.\n");
    }

}