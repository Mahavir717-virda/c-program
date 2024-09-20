#include <stdio.h>
int main()
{
  int total = 0;
  printf("burger price is : 150 \n");
  printf("pizza price is :200 \n ");
  printf("pasta price is :120 \n ");
  printf("sandwich price is :100 \n");
  printf("french fries price is :80 \n");

  int choice;
  while (choice)
  {
    printf("enter your order here : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("burger is added to your order = 150 \n");
      total += 150;
      break;
    case 2:
      printf("pizza is added to your order = 200 \n");
      total += 200;
      break;
    case 3:
      printf("pasta is added to your order = 120 \n");
      total += 120;
      break;
    case 4:
      printf("sandwich is added to your order = 100 \n");
      total += 100;
      break;
    case 5:
      printf("french fries is added to your order = 80 \n");
      total += 80;
      break;
    case 0:
      printf("finishing order \n");
      printf("%d", total);
      return 0;

    default:
      printf("invalid choice");
      break;
    }
  }
  printf("NAME :Virda Mahavir");
  printf("ID : 24TCEZWT");

  return 0;
}
