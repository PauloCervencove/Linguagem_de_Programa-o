#include<stdio.h>
#include <stdlib.h>

void receber(int *v, int n);
void receber(int *v, int n){
int i;
for(i=0;i<n;i++){
printf("Elemento de posicao %d coloque um valor =  ", i);
scanf("%d", &v[i]);
}
}
int main(){
int *p, n, i;

printf("Digite um valor n para os elementos de seu vetor: ");
scanf("%d", &n);
p= (int*) malloc(n*sizeof(int));

if(p==NULL){
printf("          ATENCAO        \n");
printf("Erro na alocacao de memoria.");
exit(1);
}

 receber(p, n);
  printf("   IMPRESSAO DOS VALORES DIGITADOS\n");
for(i=0;i<n;i++){
printf(" Posicao %d foi digitado o valor = %d\n",i, p[i]);
}

free(p);

return(0);
}

