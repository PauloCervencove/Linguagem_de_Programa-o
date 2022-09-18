#include<stdio.h>
int main (){
int v[5], *p,i;
  for(i=0;i<5;i++){
    scanf("%d", &v[i]);
  }
 p=v;
 for(i=0;i<5;i++){
    printf("A posicao [%d] do vetor tem valor %d e tem como endereco %d\n",i, *(p+i), (p+i));
  }
    printf("Portanto os enderecos que tem valores pares sao :\n");
     for(i=0;i<5;i++){

        if( *(p+i)%2 == 0){

            printf("%d\n", (p+i));
        }
     }
     return 0;
}
