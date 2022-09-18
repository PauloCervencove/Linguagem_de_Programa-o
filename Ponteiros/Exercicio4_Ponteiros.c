#include<stdio.h>


int troca(int x,int y){
 int *p1=&y,*p2=&x;
    printf("Valores Trocados\n");
    printf("A = %d e B = %d", *p1,*p2);


}

int main (){

int a,b;
       printf("Digite o Valor da Variavel A = ");
       scanf("%d", &a);
       printf("Digite o Valor da Variavel B = ");
       scanf("%d",&b);
       troca(a,b);



}
