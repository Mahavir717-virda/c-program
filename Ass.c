#include<stdio.h>
#include<string.h>


struct detail
{
    char name[25];
    int age;
    float Height;
};

void EnterDetail(struct detail *p1)
{
    printf("Enter Name : ");
    scanf("%[^\n]s",p1->name);
    fflush(stdin);

    printf("Enter age :");
    scanf("%d",&p1->age);
    fflush(stdin);

    printf("Enter Height :");
    scanf("%f",&p1->Height);
    fflush(stdin);
}

void DisplayDetail(struct detail *p1)
{
    printf("\t Name\t age\t Height\n");
    printf("\t %s\t %d\t %f",p1->name,p1->age,p1->Height);
}
int main()
{
    struct detail *p1;
    EnterDetail(&p1);
    DisplayDetail(&p1);
    return 0;
}
