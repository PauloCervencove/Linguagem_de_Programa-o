#include<stdio.h>
int MinMax(int tam,int v[],int *x,int *y);
int main (){

  int i,tam,minimo,maximo;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tam);
  int v[tam];
     printf("Preencha o vetor:\n");
     for(i=0;i<tam;i++){
        scanf("%d", &v[i]);
       }

     MinMax(tam,v,&minimo,&maximo);
     printf("O valor minimo do vetor = %d e o valor maximo = %d", minimo, maximo);
}

int MinMax(int tam,int v[],int *x,int *y){
      int i;
      *x=v[0];
      for(i=1;i<tam;i++){
        if(v[i] < *x){
            *x=v[i];
        }
      }
     *y=v[0];
     for(i=1;i<tam;i++){
        if(v[i] > *y){
            *y=v[i];
        }
      }



}
