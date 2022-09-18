#include<stdio.h>

char recebe( char *s1, char *s2);
int main(){

  char s1[50],s2[50];
    printf("Digite uma palavra\n");
    scanf("%s",&s1);
    printf("Digite uma outra palavra para comparacao\n");
    scanf("%s",&s2);
    recebe(s1,s2);
    if (recebe(s1,s2)== 1){
        printf("iguais" );
        }
    else{
        printf("Nao esta igual");
     }
}
char recebe( char *s1, char *s2){
     int i=0;

     while(*(s1+i) == *(s2+i) && *(s1+i) != '\0' && *(s2+i) != '\0'){
      i++;
     }
     if(*(s1+i)== '\0' && *(s2+i) == '\0'){

        return 1;
     }
     else{

        return 0;
     }
}
