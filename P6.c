#include<stdio.h>
int main ()
{
    float a;
    printf("enter a :");
    scanf("%f",&a);

    float b;
    printf("enter b :");
    scanf("%f",&b);

  char ch;
 printf("Enter operator (+, -, *, /):");
  scanf(" %c",&ch);
   switch(ch){
   case '+' : printf("addition is = %f\n", a + b);
                break;
   case '-' : printf("difference is = %f\n", a - b);
                break;
   case '*' : printf("multyplyty is = %f\n", a * b);
                break;
   case '/' : printf("division is = %f\n", a / b);
                break;
                default:
                printf("invalid input\n");
                }
    printf(" STUDENT ID :24CE142\n");
    printf("NAME : Virda Mahavir");

    return 0;
}