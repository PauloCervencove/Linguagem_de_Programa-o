#include<stdio.h>
#include<stdlib.h>

int *valoresentre(int *v,int n,int min,int max,int *qtd);
main(){
        int n,i,min,max,*qtd,c=0;


    printf(" Digite o tamanho do seu vetor: ");
    scanf("%i",&n);
        int *v=(int*)malloc(n*sizeof(int));

         if(v==NULL){
            printf("         ATENCAO\n");
    printf("Erro sem espaco para alocar memória\n");
    exit(1);
         }
         printf("Preencha o vetor:\n");
         for(i=0;i<n;i++){
         printf("Posicao v[%d] recebe = ", i);
             scanf("%i",&v[i]);
          }
          printf("\nDigite o valor minimo a ser buscado: \n");
          scanf("%d", &min);



           for(i=0;i<n;i++){
            if((min==v[i])||(min >v[i])){
               c= c + 1;
            }
           }
          printf("\nDigite o valor maximo a ser buscado: \n");
          scanf("%d", &max);

          for(i=0;i<n;i++){
            if((max==v[i])||(max<v[i])){
               c= c+1;
            }
          }
          c= n-c;



        qtd=(int*)malloc(n*sizeof(int));
        qtd=valoresentre( v, n, min, max, qtd);
       printf("\nOs valores entre %d e %d = ", min,max);
        if(c<=0){
        printf("Encontraram um erro nenhum valor encontrado entre eles.");

        }
        else{
         for(i=0; i<c; i++)
  { printf("%d ", *(qtd+i));

  }
        }



    free(qtd);

}
int *valoresentre(int *v,int n,int min,int max,int *qtd){
            int i=0,j=0;

              qtd= (int*)malloc(n * sizeof(int));

              if (qtd == NULL){
                printf("         ATENCAO\n");
             printf("Erro sem espaco para alocar memória\n");
             exit(1);
            }
             for(i=0;i<n;i++){
                if((*(v+i)> min) && (*(v+i)< max)){
                    *(qtd +j)=*(v+i);

                    j++;
                }
             }




             return(qtd);


}

