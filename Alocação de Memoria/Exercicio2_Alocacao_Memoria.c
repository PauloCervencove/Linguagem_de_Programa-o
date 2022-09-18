#include <stdio.h>
#include <stdlib.h>
int receber(int *v, int n) {
    v= malloc(n * sizeof(int));
    return v;
}

void imprima(int *v, int n){
    int i;
    printf("\n   IMPRESSAO DO VETOR  \n");
    for(i=0;i<n;i++){
        printf("O vetor [%d] tem o valor = %d\n", i,v[i]);
    }
}
void libera(int *v){
        free(v);
}
main(){
    int n,*v, i;
    printf("Digite um valor n para o seu vetor: ");
    scanf("%d", &n);
    v =receber(v,n);

    printf("Preencha o vetor\n");
    for(i=0;i<n;i++){
        printf("O vetor da posicao [%d] = ",i);
        scanf("%d", &v[i]);
    }

    void imprima(int *v, int n);
    imprima(v, n);

    void libera(int *v);
    libera(v);


}
