#include<stdio.h>
float media(float x,float y,float *medias,float *mediap);
int main (){
 float n1,n2,MediaSimples,MediaPonderada;
 printf("Digite a primeira nota: ");
 scanf("%f", &n1);
printf("Digite a segunda nota: ");
 scanf("%f", &n2);
 media(n1,n2,&MediaSimples,&MediaPonderada);
  printf("A media simples entre as notas %.2f e %.2f = %.2f\n", n1,n2,MediaSimples);
  printf("A media ponderada entre as notas %.2f e %.2f = %.2f ", n1,n2,MediaPonderada);
  printf("\n\n\n");
}
float media(float x,float y,float *medias,float *mediap){
     *medias=(x +y)/2;
     *mediap=(x+(y*2))/3;
}
