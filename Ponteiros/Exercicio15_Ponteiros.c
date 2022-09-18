#include<stdio.h>
int imprima(int *v[]);
int main (){

  int v[5],i;
   printf("Vetor com 5 valores pode digitar.\n");
    for(i=0;i<5;i++){
        scanf("%d", &v[i]);
    }
     imprima(v);


}

 int imprima(int *v[]){
      int *p=v,i;
      printf("Seus valores sao:\n");
      for(i=0;i<5;i++){
         printf("%d\n", *v);
         *p= p+1;
         *p= v[i+1];
      }

 }
