#include<stdio.h>
int main()
{
    int x,i,j;
    printf("Enter no. of Rows :");
    scanf("%d",&x);
    for(i=1;i<=x+1;i++)
    {
        for(j=x;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("U ID : 24TCEZWT \n");
    printf("NAME : Virda Mahavir");
    return 0;
}

