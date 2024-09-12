#include<stdio.h>
int main()
{
    int arr[25];
    int p=0;
    int e=0;
    int o=0;
    int n=0;

    for(int i=0;i<25;i++)
    {
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if(arr[i] > 0)
        {
            p++;
        }
        else
        {
            n++;
        }
        

    }
    printf("There are %d numbers are even.\n",e);
    printf("There are %d numbers are positive.\n",p);
    printf("There are %d numbers are negative.\n",n);
    printf("There are %d numbers are odd.\n",o);
     printf("NAME : Virda Mahavir");
    printf("ID : 24TCEZWT ");
    return 0;
}
