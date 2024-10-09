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

    for(int i=1;i<n;i++)
    {
          sum = i + (i+1);
          printf("%d",sum);
    }
}
