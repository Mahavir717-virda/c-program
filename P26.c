#include<stdio.h>
#include<string.h>
struct sport
{
    char name[50];
    char type[20];

    struct detail
    {
        char coach_name[30];
        int age;
        char exp[100];
    }coach1,coach2;
}team1,team2;

int main()
{
    strcpy(team1.name,"power Hitters");
    printf("Name of first team is : %s\n\n",team1.name);

    
    strcpy(team1.type,"Basket Ball");
    printf("Type of the %s team is : %s\n\n",team1.name,team1.type);

    
    strcpy(team1.coach1.coach_name,"Parmanand Sir");
    printf("Name of the coach of team %s  is : %s\n\n",team1.name,team1.coach1.coach_name);
    
    printf("Age of the coach %s is 23.",team1.name);

    strcpy(team1.coach1.exp," the coach of international champion team in Asia.");
    printf("Coach of team %s is %s\n",team1.name,team1.coach1.exp);

    printf("\n\n///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n");
    strcpy(team2.name,"The Gladiators");
    printf("Name of second team is : %s\n\n",team2.name);


    strcpy(team2.type,"Cricket");
    printf("Type of the %s team is : %s\n\n",team2.name,team2.type);


    strcpy(team2.coach2.coach_name,"Krunal sir");
    printf("Name of the coach of team %s  is : %s\n\n",team2.name,team2.coach2.coach_name);

    printf("Age of the coach %s is 23.",team2.name);

    strcpy(team2.coach2.exp," the coach of National champion team in India.");
    printf("Coach of team %s is %s\n\n",team2.name,team2.coach2.exp);

    printf("ID : 24CE142 \n");
    printf("NAME : VIRDA MAHAVIR ");
    return 0;

}