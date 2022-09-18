#include<stdio.h>

int main (){

int i;
float v[10],*p;
  p= v;

   for(i=0;i<10;i++){
    printf("A posicao v[%d] tem como endereco = %d\n",i, (p+i));

   }

 return 0;

}
