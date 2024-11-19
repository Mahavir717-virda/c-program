#include <stdio.h>
#define SIZE 5
int main()
{
    FILE *p;
    char a[SIZE];
    p = fopen("Demo.txt", "r");
    for (int i = 0; i < 5; i++)
    {
        a[i] = fgetc(p); // get all the word from the file 
        if (a[i] == EOF)
        {
            break;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%c", a[i]); // print the word in array
    }

    fclose(p);

    char rev[SIZE];
     for (int i = 0; i < SIZE; i++)
    {
        rev[i]=a[5-i-1];  // reverse the word 
    }

    printf("\nReverse string is : ");
     for (int i = 0; i < SIZE; i++)
    {
        printf("%c", rev[i]); // print the word in reverse    
    }
    printf("NAME : Virda Mahavir\n");
    printf("ID : 24CE142");
    return 0;
}