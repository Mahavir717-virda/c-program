#include<stdio.h>
#define ROW 5
#define SEATS_PER_ROW 10
int main()
{
    int seating[ROW][SEATS_PER_ROW];
    int a,row,seat;
    printf("Welcome to the INOX theater.\n");
    printf("theater have %d no. of row & %d  no. of seats per row\n",ROW,SEATS_PER_ROW);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<10;j++)
        {
               seating[i][j]='O';
        }
    }
    printf("Enter the  number of seat you want = ");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
         printf("Enter row and seat number for reserved seat %d (eg. 0 2) ",i+1);
         scanf("%d %d",&row ,&seat);
        if(row>0 && row<=ROW && seat>0 && seat<=SEATS_PER_ROW)
        {
               seating[row-1][seat-1] = 'X';
        }
        else{
             printf("Entered row and seat number is invalid. please enter number in range of row and seats\n");
             i--;
        }
    }
    printf("Seating chart is :\n");
    for(int i=0;i<5;i++)
    {
         printf("Row %d :",i+1);
         for(int j=0;j<10;j++)
         {
              printf("%c ",seating[i][j]);
         }
         printf("\n");
    }
    printf("NAME : Virda Mahavir");
    printf("ID : 24CE142");

   return 0;



}