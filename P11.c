#include<stdio.h>
int main()
{
    int matchstick = 21;
    int userpick,computerpick;
    printf("Here are 21 matchsticks in game ! \n");
    printf("You have to pick only 1,2,3 or 4 matchsticks. \n");


    while(1)
    {
        printf("User's turn: ");
        scanf("%d",&userpick);
        matchstick -= userpick;
        printf("there are %d matchstick left \n", matchstick);

        computerpick = 5 - userpick;
        printf("computer pick matchstick %d \n",computerpick);
        matchstick -=computerpick;
        if(matchstick == 1)
    {
        printf("you have pick last matchstick ! you lose \n");
        break;
    }

    }


    return 0;
}
