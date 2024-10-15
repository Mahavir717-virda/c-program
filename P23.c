#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of fibonaki series you want : ");
    scanf("%d",&n);
    void fib();
    fib(n);
}
void fib(int n)
{
    int k=0,l=1;
    int sum;
    printf("%d %d",k,l);

    for(int i=1;i<=n;i++)
    {

         sum = k+l;
         k = l;
         l = sum;
          printf(" %d ",sum);
    }
    printf("\nID : 24CE142\n");
    printf("Name : Virda Mahavir\n");
}
