#include<stdio.h>
int main() {
  float population=1441987744,womanpopu,liwoman,illwoman,popumen,limen,illmen,totalmen;
  womanpopu= (1441987744*48.4)/100;
  liwoman=(womanpopu*62.84)/100;
  illwoman=womanpopu - liwoman;
  printf("illiterate woman : %f \n",illwoman);
  popumen=population -  womanpopu;
  limen=(popumen*80.95)/100;
  illmen=popumen - limen;
  printf("illiterate men : %f \n",illmen);

printf(" STUDENT ID :24TCEZWT");
printf("NAME : Virda Mahavir");
return 0;
}
