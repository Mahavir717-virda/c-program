// write a program to find student pass or fail or first class or distinction using pointers
#include<stdio.h>
int Mark( int *ptr,int No[])
{
    int i;
    int d = 0;
    int f = 0;
    int p = 0;
    int fail = 0;

    printf("Enter Marks of 10 students : ");
    for( i=0; i<10; i++)
    {
        scanf("%d",&No[i]);


        if(No[i]>=70)
        {
            d++;
        }

        else if(No[i]>=60 && No[i]<=69)
        {
            f++;
        }

        else if(No[i]>=40 && No[i]<=59)
        {
            p++;
        }

        else if(No[i]<=40)
        {
            fail++;
        }
    }
    printf("DISTINCTION %d \n\n",d);
    printf("FIRST CLASS %d \n\n",f);
    printf("PASS %d \n\n",p);
    printf("FAIL %d \n\n",fail);

}
int main()
{
    int No[10];
    int *ptr = &No;
    Mark(ptr,No);
    printf("ID : 24CE142");
    printf("NAME : Virda Mahavir");

}
