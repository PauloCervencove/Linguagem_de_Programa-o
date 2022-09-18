#include<stdio.h>

int main (){
 int a,b;
 int *p1=&a,*p2=&b;


    printf("O endereco da Variavel A = %d\n", p1);
    printf("O endereco da Variavel B = %d\n", p2);
    printf("Sendo assim");
   if(p1 > p2){
    printf(" %d Maior que %d", p1, p2);
   }
   else{
    printf(" %d Maior que %d", p2,p1);
   }
   return 0;
}
