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
   case '+' : printf("addition is = %f", a + b);
                break;
   case '-' : printf("difference is = %f", a - b);
                break;
   case '*' : printf("multyplyty is = %f", a * b);
                break;
   case '/' : printf("division is = %f", a / b);
                break;
                default:
                printf("invalid input");
                }
    printf(" STUDENT ID :24TCEZWT");
    printf("NAME : Virda Mahavir");

    return 0;
}
