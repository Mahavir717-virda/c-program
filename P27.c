// write a program to swap value using pointers and function
#include<stdio.h>
int tra(int *ptr1 , int *ptr2)
{
    int swap;
    for(int i=0;i<1;i++)
    {
         printf("Bank Balance before swapping is %d and %d\n\n",*ptr1,*ptr2);
        swap = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = swap;
        printf("Bank Balance after swapping is %d and %d\n\n",*ptr1,*ptr2);
    }
}
int main()
{
    int Balance1 = 5000000;
    int Balance2 = 10000000;
    int *ptr1 = &Balance1;
    int *ptr2 = &Balance2;
    tra(ptr1,ptr2);
    return 0;
    printf("ID : 24CE142");
    printf("NAME : Virda Mahavir");
}

