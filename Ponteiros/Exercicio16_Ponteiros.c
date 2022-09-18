#include<stdio.h>
int main(){
int A,*B,**C,***D;
   printf("Digite um valor: ");
   scanf("%d", &A);
   B=&A;
   *B= A +A;
   printf("Seu dobro = %d\n", *B);
   C=&B;
   **C=(A + A) - (A/2);
   printf("Seu triplo = %d\n", **C);
   D=&C;
   ***D= A + (A/3);
   printf("Seu quadruplo = %d", ***D);




}
