#include<stdio.h>
int main()
{
    int ramanb=1200000,ramanp=600000,ramanc=300000,sumana=1100000,sumanh=800000,sumanc=800000,Ramanproperty,Sumanproperty;
    Ramanproperty=ramanb+ramanp+ramanc;
    Sumanproperty=sumana+sumanh+sumanc;
    if(Ramanproperty>Sumanproperty){
        printf("Raman Has more property \n");
        }
        else if(Ramanproperty<Sumanproperty){
            printf("Suman Has more property \n");
        }
        else{
            printf("Both Has equal property \n");
        }
        printf("student id : 24TCEZWT \n");
        return 0;

}
