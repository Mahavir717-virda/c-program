#include<stdio.h>
#include<string.h>
int main()
{
    char NAME[60][15],t[15];
    int n,i,j;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        gets(NAME[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(strcmp(NAME[j],NAME[j+1])>0)
            {
                strcpy(t,NAME[j]);
                strcpy(NAME[j],NAME[j+1]);
                strcpy(NAME[j+1],t);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s \n",NAME[i]);
    }
    printf("NAME : Virda Mahavir");
    printf("ID : 24CE142 ");
    return 0;
}