// write a program to write and read the marks of students from the file
#include <stdio.h>
int main()
{
    int a;
    printf("Enter no of elements : ");
    scanf("%d", &a);
    FILE *p;
    int mark[a];
    p = fopen("marks.txt", "w");
    for (int i = 0; i < a; i++)
    {
        if(p==NULL)
        {
            printf("Error !");
            return 1;
        }
        scanf("%d", &mark[i]);
    }

    for (int i = 0; i < a; i++)
    {
        putw(mark[i],p);
    }

    fclose(p);

    p = fopen("marks.txt", "r");
    printf("Marks read from the file is  \n");
    for (int i = 0; i < a; i++)
    {
        if(p==NULL)
        {
            printf("Error !");
            return 1;
        }
        int b = getw(p);
        printf("Mark of student %d is : %d\n", i + 1,b);
    }

    fclose(p);
    printf("NAME : Virda Mahavir\n");
    printf("ID : 24CE142");
    return 0;
}