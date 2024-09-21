#include <stdio.h>
int main()
{
    int Num[25];
    int p = 0;
    int n = 0;
    int e = 0;
    int o = 0;
    int i;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter price of %d item :", i + 1);
        scanf("%d", &Num[i]);
    
    
    if (Num[i] > 0)
    {
        p++;
    }
    else  
    {
        n++;
    }
    if (Num[i] % 2 == 0)
    {
        e++;
    }
    else
    {
        o++;
    }
    }
    printf("Total positive no. are %d.\n", p);
    printf("Total negative no. are %d.\n", n);
    printf("Total even no. are %d.\n", e);
    printf("Total odd no. are %d.\n", o);

    printf("NAME : Virda Mahavir");
    printf("ID : 24CEZWT");
    return 0;
}