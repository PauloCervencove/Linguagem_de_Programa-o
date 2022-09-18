#include<stdio.h>
#define T 5
int main(){
int valor(int v[],int x);
int v[T],n;
     printf("Digite um valor para preencher um vetor:\n");
      scanf("%d", &n);
        valor(v,n);


}

 int valor(int v[],int x){
         int *p=&x,i;
         for(i=0;i<T;i++){

           printf("|%d|", *p);
           p= p+1;
           *p= x;

         }



 }
