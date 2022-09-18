#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int raizes(float A,float B,float C,float * X1,float * X2);
int main(){
 float a,b,c,x1,x2;
 printf("Digite o valor de A: ");
 scanf("%f", &a);
 if(a==0){
    printf("           ATENCAO  \n");
    printf("O valor de A nao pode ser igual a zero\n\n");
    while (a==0){
        printf("Digite um valor de A diferente de zero: ");
        scanf("%f", &a);
    }
 }
printf("Digite o valor de B: ");
 scanf("%f", &b);
printf("Digite o valor de C: ");
 scanf("%f", &c);
raizes(a,b,c,&x1,&x2);
printf("Valor do x1= %.2f valor do x2= %.2f", x1,x2);

}
int raizes(float A,float B,float C,float * X1,float * X2){
      float delta;

      delta= B * B -4*A*C;
      if(delta < 0){
        printf("Nao existe raizes reais\n");
      }
      else if(delta ==0){
        *X1=(-B + sqrt(delta))/2*A;
        *X2=(-B - sqrt(delta))/2*A;
      }
      else{
        *X1=(-B + sqrt(delta))/2*A;
        *X2=(-B - sqrt(delta))/2*A;
      }

}
