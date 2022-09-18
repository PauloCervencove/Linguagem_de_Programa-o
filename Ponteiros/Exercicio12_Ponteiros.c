#include<stdio.h>


int ordena (int *x, int *y, int *z);
int main (){

int a,b,c;

   scanf("%d" "%d" "%d", &a,&b,&c);

   ordena(&a,&b,&c);



    printf("%d %d %d", a,b,c);



return 0;

}
 int ordena (int *x, int *y,int *z){
         int aux;
          if((*x==*y)&& (*x==*z)){
              printf("numeros iguais\n");

        return 1;
          }
           if((*x<*y)&& (*x<*z)){
            if(*y<*z){
                return 0;
            }
            else{
                aux=*y;
                *y=*z;
                *z=aux;
                return 0;
            }
           }
         else if((*y<*x)&& (*y<*z)){
            if(*x<*z){
               aux=*x;
               *x=*y;
               *y=aux;
               return 0;
            }

               else{
                aux=*x;
                *x=*y;
                *y=aux;
                aux=*y;
                *y=*z;
                *z=aux;
                return 0;
               }

         }
         else{
            if(*x<*y){
                aux=*x;
                *x= *y;
                *y=aux;
                aux=*x;
                *x=*z;
                *z=aux;
                return 0;
            }
                 else {
                    aux=*x;
                    *x=*z;
                    *z=aux;
                }
                return 0;



            }
         }





