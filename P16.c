#include <stdio.h>
int main() {
    int list[10];
    int n;
    int temp=0;
    printf("Enter how many items you want to order : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("the price of %d item is = ",i+1);
        scanf("%d",&list[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("Assending order is : %d\n",list[i]);
    }
     printf("NAME : Virda Mahavir");
    printf("ID : 24TCEZWT ");
    return 0;
}