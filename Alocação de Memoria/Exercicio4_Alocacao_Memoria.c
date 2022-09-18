#include <stdio.h>
#include <stdlib.h>

int *interseccao(int *x1, int *x2, int n1, int n2, int *qtd);

int main()
{ int i, x1[]={1,3,5,6,7}, x2[]={1,3,4,6,8}, *x3,contador=-1, tam1, tam2, tam3;

  tam1 = 5;
  tam2 = 5;
  tam3 = tam1 + tam2;

  if (x1==NULL)
  {
    printf("         ATENCAO\n");
    printf("Erro sem espaco para alocar memória\n");
    exit(1);
  }



  if (x2==NULL)
  {
    printf("         ATENCAO\n");
    printf("Erro sem espaco para alocar memória\n");
    exit(1);
  }
     printf("Vetor x1={ ");
     for(i=0; i<tam1; i++)
     { printf("%d ", *(x1+i));
   }
      printf("}");


    printf("\nVetor x2={ ");
    for(i=0; i<tam2; i++)
    { printf("%d ", *(x2+i));
    }
    printf("}");

    for(i=0;i<tam3;i++){
        if(x1[i]==x2[i]){
            contador=contador + 1;
        }
     }


  x3 = (int*)malloc(tam3*sizeof(int));

  x3 = interseccao(x1,x2,tam1,tam2,x3);

    printf("\nVetor x3={ ");
    for(i=0; i<contador; i++)
  { printf("%d ", *(x3+i));
  }
    printf("}");
    printf("\n\n");


}

int *interseccao(int *x1, int *x2, int n1, int n2, int *qtd){
 int i=0, j=0,c;

     c=n1+n2;

   qtd= (int*)malloc(c * sizeof(int));

   if (qtd == NULL)
   {    printf("         ATENCAO\n");
    printf("Erro sem espaco para alocar memória\n");
        exit(1);
   }


  for(i=0; i<c; i++){
   if(*(x1+i)== *(x2+i)){
     *(qtd+j) = *(x1+i);
        j++;
    }
  }

return (qtd);
}

