#include<Stdio.h>
int main (){
    int marks;
    printf("enter marks :");
    scanf("%d",&marks);

    (marks >= 90 && marks < 100) ? printf("Grade A \n"): (marks >= 80 && marks < 90) ? printf("Grade B \n"):(marks >= 70 && marks < 80 ) ? printf("Grade C \n"):(marks >= 70 && marks < 60) ? printf("Grade D \n"): (marks <= 60) ? printf("Grade F \n"): printf("entered marks is invalid");
return 0;
}




