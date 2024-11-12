#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("Enter No. of Elements : ");
    scanf("%d",&n);

    char *p;
    p = (char*)calloc(n,sizeof(char));

    printf("Enter string : ");
    scanf("%s",&*p);

    printf("Entered string before reallocation is : %s",p);

    p = (char*)realloc(p,20*sizeof(char));

    printf("Enter string : ");
    scanf("%s",p);

    printf("Entered string after reallocation of memory : ");
    puts(p);

    free(p);

    printf("ID : 24CE142");
    printf("Name : Virda Mahavir");
    return 0;
}
