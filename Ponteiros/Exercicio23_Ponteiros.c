#include<stdio.h>
int maior(int n,int v[n],int *x);
int main(){

 int n,i,m;
 printf("Digite o tamanho do vetor:");
 scanf("%d", &n);
  int v[n];
     printf("Preencha o vetor:\n");
     for(i=0;i<n;i++){
        scanf("%d", &v[i]);
     }

     maior(n,v,&m);
     printf("Maior valor do vetor ");
     for(i=0;i<n;i++){
        printf("|%d|",v[i]);
     }
    printf(" = %d",m);
}
int maior(int n,int v[n],int *x){
    int i;
    *x=v[0];
     for(i=1;i<n;i++){
        if(v[i]> *x){
            *x=v[i];
        }
     }
}
