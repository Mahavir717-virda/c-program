#include<stdio.h>
int main()
{
    int x,i,j,k;
    printf("Enter no. of Rows :");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=x;j>=i;j--)
        {
            printf(" ");
        }
        int k=65;
        for(j=1;j<=i;j++)
        {
            printf("%c",k);
            k += 1;
        }
        int m=65;
        for(j=2;j<=i;j++)
        {
            printf("%c",m);
            m += 1;
        }
        printf("\n");
    }
     printf(" STUDENT ID :24TCEZWT");
     printf("NAME : Virda Mahavir");

    return 0;
}
