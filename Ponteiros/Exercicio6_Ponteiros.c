#include<stdio.h>


int troca(int x,int y){
 int soma,*a=&x,*b=&y;

 x= x + x;
 y=y+y;
 soma =x+y;
 y=y;

 printf("%d\n",soma);
 printf(" Variavel A = %d e Variavel %d", *a, *b);
}

int main (){

int a,b;
       printf("Digite o Valor da Variavel A = ");
       scanf("%d",&a);
       printf("Digite o Valor da Variavel B = ");
       scanf("%d",&b);
       troca(a,b);


}
