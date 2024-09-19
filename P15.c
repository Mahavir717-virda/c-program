#include <stdio.h>
int main()
{
    int n;
    printf("Welcome to the Foodies Restaurant.\n");
    printf("here is the ordering menu list.");
    printf(" We have Burger - 150\nPizza - 200\nPasta - 120\nSandwich - 100\nfrench Fries - 80");
    int menu;
    printf("Press 1 for burger.\n");
    printf("Press 2 for Pizza.\n");
    printf("Press 3 for Pasta.\n");
    printf("Press 4 for Sandwitch.\n");
    printf("Press 5 for French Fries.\n");
    printf("Press 0 for finishing the order.\n");

    int i = 0;
    while (1)
    {
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("Burger added to your order.");
            i += 150;
            break;
        case 2:
            printf("Pizza added to your order.");
            i += 180;
            break;
        case 3:
            printf("Pasta added to your order.");
            i += 200;
            break;
        case 4:
            printf("Sandwitch added to your order.");
            i += 100;
            break;
        case 5:
            printf("French fries added to your order.");
            i += 80;
            break;
        case 0:
            printf(" your order is finished.");
            printf("yor bill is %d", i);
            break;
        default:    printf("enter between 0 to 5");
        }
    }
    return 0;
}