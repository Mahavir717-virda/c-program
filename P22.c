#include<stdio.h>

void main()
{
    int m[10];
    int n,z,g,H,A;
    printf("Enter the no. of students : ");
    scanf("%d",&n);


    void mark();
    mark(n,m);
    int Total();
    z = Total(n,m);
    printf("Total Marks is : %d \n",z);


    int avg();
     g = avg(z,n);
    printf("average mark is : %d \n",g);


    int high();
    H = high(n,m);
    printf("Highest Mark is %d \n ",H);


    int low();
    A = low(n,m);
    printf("Lowest Mark is %d \n ",A);


    printf(" STUDENT ID :24TCEZWT\n");
    printf("NAME : Virda Mahavir");

}
void mark(int x,int m[])
{
    for(int i=0;i<x;i++)
    {
       printf("student %d : ",i+1);
       scanf("%d",&m[i]);
    }
}
int Total(int y,int m[])
{
    int sum=0;
    for(int j=0;j<y;j++)
    {
        sum += m[j];
    }

    return sum;
}
int avg(int a, int b)
{
    int s;
    s=a/b;
    return s;
}
int high(int n,int m[])
{
    int highest = m[0];
    for(int i=1;i<n;i++)
    {
        if(m[i] > highest)
        {
            highest = m[i];
        }
    }
    return highest;
}
int low(int n,int m[])
{
    int lowest = m[0];
    for(int i=1;i<n;i++)
    {
        if(lowest > m[i])
        {
            lowest = m[i];
        }
    }
    return lowest;
}