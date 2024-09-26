#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    check(a, b, c);
    area(a, b, c);
    printf("student id :24TCEZWT");
    printf("NAME : Virda Mahavir");
}
void check(int a, int b, int c)
{
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        printf("Lengths are suitable for triangle.\n");
    }
    else
    {
        printf("Lengths are not suitable for triangle.\n");
    }
}
int area(int a, int b, int c)
{
    int s;
    s = (a + b + c) / 2;
    s = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of the triangle is %d", s);
    return s;
}