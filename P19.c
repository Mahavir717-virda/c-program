// write a program to apply some function of strings  without using string.h header file
#include <stdio.h>
int main()
{
// for calcutung the length of the string
    char str[40], temp;
    printf("Enter your statement here : ");
    gets(str);
    int size = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    printf("The size of the string is : %d\n", size);
       
       
    printf("\n \n");


// for coping the string
    char cpy[41];
    int i;
    for (i = 0; i <= str[i] != '\0'; i++)
    {
        cpy[i] = str[i];
    }
    cpy[i] = '\0';
    printf("The copied string is : %s",cpy);


    printf("\n \n");


// for reversing the string
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("The Reverse string is : %s",str);


    printf("\n \n");


 // for comparing the strings
    char str1[50], str2[50];
    int diff;
    puts("Enter Below Strings for comparing Them.");
    printf("\n");

    printf("Enter first string  :");
    gets(str1);

    printf("Enter second sring : ");
    gets(str2);

    for (int i = 0; i <= str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        diff = str1[i] - str2[i];
    }
    if (diff == 0)
    {
        printf("str1 and str2 is equal.");
    }
    else if (diff > 0)
    {
        printf("str1 is greater than str2.");
    }
    else
    {
        printf("str1 is less than str2..");
    }


    printf("\n \n");
    

//for concating two string
    printf("Enter Below strings to concate them.\n \n");
    char string3[50],string4[50],string5[50];
    int j;

    printf("Enter first string  :");
    gets(string3);

    printf("Enter second sring : ");
    gets(string4);

    for( i = 0 ; i <= string3[i]!='\0' ; i++)
    {
          string5[i]=string3[i];
    }
    string5[i] = ' ';

    for( j = 0 ; j <= string4[j] != '\0' ; j++)
    {
        string5[i+j+1] = string4[j];
    }
    string5[i+j+1] = '\0';

    printf("Concating string is : %s\n \n",string5);


    printf("student id :24CE142\n");
    printf("NAME : Virda Mahavir");
}