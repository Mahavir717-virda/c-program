#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of Rows : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == 0 || j == n )
                printf("M ");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("NAME : Virda Mahavir");
    printf("ID : 24CE142 ");
}