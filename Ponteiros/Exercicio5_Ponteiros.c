#include<stdio.h>


int troca(int x,int y){
 int *p1=&x,*p2=&y;
 int aux;
    if(*p1>*p2){
        printf("Variavel A maior entao permanece os mesmo valores\n");
        printf("Sendo Variavel A = %d e Variavel B = %d", *p1,*p2);
    }
   else{
     aux=p1;
     p1=p2;
     p2=aux;
     printf("Variavel A menor entao efetua a troca\n");
     printf("Sendo agora Variavel A = %d e Variavel B = %d", *p1,*p2);
   }

}

int main (){

int a,b;
       printf("Digite o Valor da Variavel A = ");
       scanf("%d",&a);
       printf("Digite o Valor da Variavel B = ");
       scanf("%d",&b);
       troca(a,b);



}

