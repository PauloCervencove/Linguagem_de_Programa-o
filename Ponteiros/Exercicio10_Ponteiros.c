#include<stdio.h>

int main (){

   int v[5],*p,i;

    for(i=0;i<5;i++){
        scanf("%d", &v[i]);
    }
   p=v;
   for(i=0;i<5;i++){
    printf("%d\n", *(p + i)*2);

   }

}
