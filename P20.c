#include <stdio.h>
void name()
{
    printf("Welcome to the charusat university.\n");
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
    
    
}
int num()
{
    int n;
    printf("Enter no. of student : ");
    scanf("%d", &n);
    return n;
}
void mark(int no[], int n)
{
    printf("Students Grades : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter grade for student %d : ", i + 1);
        scanf("%d", &no[i]);
        printf("Student Grade %d : Grade %d \n",i+1,no[i]);
    }
}
int avg(int no[], int n)
{
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum = sum + no[j];
    }
    return sum / n;
}
int main()
{
    int no[50];

    name();
     int m = num();
    mark(no, m);
     int n = avg(no, m);
    printf("sum of the marks of the student is %d", n);
    return 0;
}
