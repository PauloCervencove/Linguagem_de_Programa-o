#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

typedef  struct Contato;
typedef struct {
        char nome [60];
        char telefone;
        char telefone1[15];
        char endereco1 [60];

        char email [60];
        char apelido[60];
 }Contato;
 void titulo();
 void titulocadastrar();
 void titulopesquisaemail();
 void titulopesquisanome();
 void titulolistarcontatosordenadosnome();
 void titulolistarcontatosordenadosemail();
 void tituloalterarcontato();
 void tituloremover();
 void titulopesquisaapelido();
 void titulolistacontatoprimeiraletra();
 void cadastrar(Contato *agenda, int *n,int *cap);
 Contato *inicializar(int cap);
 void pesquisacontatoemail(Contato *agenda,int n);
 void pesquisacontatonome (Contato *agenda,int n);
 void listarcontatosordenadosnome (Contato *agenda,int n);
 void listarcontatosordenadosemail (Contato *agenda,int n);
 void alterarcontato (Contato *agenda,int n);
 void removercontato(Contato *agenda, int *n);
 void pesquisacontatoapelido (Contato *agenda,int n);
 void listacontatoprimeiraletra (Contato *agenda,int n);
 void flush_in();
main (){
   setlocale(LC_ALL, "Portuguese");
   Contato *agenda;
   int cap =20;
   int n=0;
   int opcao;

     agenda= inicializar (cap);
       do{
          titulo();
          printf("1- Cadastrar Contatos.\n");
          printf("2- Pesquisar contato pelo email.\n");
          printf("3- Pesquisar contato pelo nome.\n");
          printf("4- Listar todos os contatos ordenados pelo nome.\n");
          printf("5- Listar todos os contatos ordenados pelo email.\n");
          printf("6- Alterar dados de um contato.\n");
          printf("7- Remover um contato.\n");
          printf("8- Pesquisar contato pelo apelido.\n");
          printf("9- Opção a sua escolha 2.\n");
          printf("10- Sair.\n\n");
          printf("Escolha uma opção de 1 a 10: ");
          scanf("%d", &opcao);
          switch(opcao){
              case 1: cadastrar(agenda,&n, &cap);
              break;

              case 2: pesquisacontatoemail(agenda, n);
              break;

              case 3: pesquisacontatonome(agenda,n);
              break;

              case 4:listarcontatosordenadosnome (agenda, n);
              break;

              case 5:listarcontatosordenadosemail (agenda, n);
              break;

              case 6: alterarcontato (agenda,n);
              break;

              case 7:removercontato(agenda,&n);
              break;

              case 8:pesquisacontatoapelido(agenda,n);
              break;

              case 9:listacontatoprimeiraletra (agenda,n);
              break;

              case 10 :
              printf("\nObrigado até breve.\n");
              getch();
              break;

              default:
                printf("\nVocê digitou uma opção que não esta entre 1 a 10\n");
                getch();
              }

       }while(opcao!=10);
             free(agenda);

           return 0;
}
void titulo(){
  system("cls");
  printf("--------------------------------------\n");
  printf("            AGENDA DE CONTATOS:\n");
  printf("--------------------------------------\n\n");
}
void titulocadastrar(){
  system("cls");
  printf("--------------------------------------\n");
  printf("            CADASTRAR CONTATOS:\n");
  printf("--------------------------------------\n\n");
}
void titulopesquisaemail(){
  system("cls");
  printf("----------------------------------------------\n");
  printf("       PESQUISE PELO EMAIL SEUS CONTATOS:\n");
  printf("----------------------------------------------\n\n");
}
void titulopesquisanome(){
  system("cls");
  printf("----------------------------------------------\n");
  printf("       PESQUISE PELO NOME SEUS CONTATOS:\n");
  printf("----------------------------------------------\n\n");
}
void titulolistarcontatosordenadosnome(){
  system("cls");
  printf("----------------------------------------------\n");
  printf("  LISTA DE SEUS CONTATOS EM ORDEM CRESCENTE POR NOME:\n");
  printf("----------------------------------------------\n\n");
}
void titulolistarcontatosordenadosemail(){
  system("cls");
  printf("----------------------------------------------\n");
  printf("  LISTA DE SEUS CONTATOS EM ORDEM CRESCENTE POR NOME:\n");
  printf("----------------------------------------------\n\n");
}
void tituloalterarcontato(){
  system("cls");
  printf("----------------------------------------------\n");
  printf("       ALTERE OS DADOS DE SEUS CONTATOS:\n");
  printf("----------------------------------------------\n\n");
}
void tituloremover(){
  system("cls");
  printf("--------------------------------------\n");
  printf("            REMOVA SEUS CONTATOS:\n");
  printf("--------------------------------------\n\n");
}
void titulopesquisaapelido(){
  system("cls");
  printf("----------------------------------------------\n");
  printf("       PESQUISE PELO APELIDO SEUS CONTATOS:\n");
  printf("----------------------------------------------\n\n");
}
void titulolistacontatoprimeiraletra(){
  system("cls");
  printf("---------------------------------------------------------------\n");
  printf("  LISTE DE SEUS CONTATOS PELO PRIMEIRA LETRA DE SEUS NOMES:\n");
  printf("----------------------------------------------------------------\n\n");
}
 Contato  *inicializar(int cap){
        Contato *agenda;
        agenda= (Contato*)malloc(sizeof(Contato)*cap);
        return agenda;
}
void flush_in(){
int ch;
while((ch=fgetc(stdin))!=EOF && ch != '\n'){}
}

void cadastrar(Contato *agenda, int *n,int *cap){
          int i;
          titulocadastrar();
          if(*n==*cap){
            *cap= *cap +20;
            agenda= (Contato*)realloc(agenda,sizeof(Contato)* (*cap));
          }
          printf("Digite o nome: \n");
          flush_in();
          gets(agenda[*n].nome);

          printf("Digite o email: \n");
          scanf("%s", agenda[*n].email);


          printf("Digite o endereço: \n");
          flush_in();
          gets(agenda[*n].endereco1);

          flush_in();
          printf("Digite o telefone: \n");
          gets(agenda[*n].telefone1);


          flush_in();
          printf("Digite o apelido: \n");
          gets(agenda[*n].apelido);

          (*n) ++;
}
void pesquisacontatoemail(Contato *agenda, int n){
        char email[60]; int i,c=0;
         titulopesquisaemail();
         printf("Digite o email: ");
         scanf("%s", email);
           for(i=0;i<n;i++){
            if(strcmp(email,agenda[i].email)==0){
                 printf("Nome = %s\n", agenda[i].nome);
                 printf("Telefone  = %s\n", agenda[i].telefone1);
                 printf("Endereço = %s\n", agenda[i].endereco1);
                 printf("Apelido = %s\n", agenda[i].apelido);
                 getch();
            c= c + 1;
           }
           }

           if(c==0){
            printf("\nNenhum contato encontrado através do email %s.\n", email);
            getch();
           }


}
void pesquisacontatonome (Contato *agenda,int n){
char nome[60]; int i,c=0;
         titulopesquisanome();
         printf("Digite o nome: ");
         flush_in();
         gets(nome);
           for(i=0;i<n;i++){
            if(strcmp(agenda[i].nome, nome)==0){
            printf("Email: %s\n",agenda[i].email);
            printf("Endereço: %s\n",agenda[i].endereco1);
            printf("Telefone: %s\n",agenda[i].telefone1);
            printf("Apelido: %s\n",agenda[i].apelido);
            c=c + 1;
            getch();
           }
           }
           if(c==0){
            printf("\nNenhum contato encontrado através do nome %s.\n", nome);
            getch();
           }





}

void listarcontatosordenadosnome (Contato *agenda,int n){
         char auxnome[60],auxemail[60],auxendereco[60],auxtelefone[15],auxapelido[60];int i,j;
        titulolistarcontatosordenadosnome();
        for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if( strcmp(agenda[i].nome,agenda[j].nome)>0){
                strcpy(auxnome,agenda[i].nome);
                strcpy(agenda[i].nome,agenda[j].nome);
                strcpy(agenda[j].nome,auxnome);
                strcpy(auxemail,agenda[i].email);
                strcpy(agenda[i].email,agenda[j].email);
                strcpy(agenda[j].email,auxemail);
                strcpy(auxendereco,agenda[i].endereco1);
                strcpy(agenda[i].endereco1,agenda[j].endereco1);
                strcpy(agenda[j].endereco1,auxendereco);
                strcpy(auxtelefone,agenda[i].telefone1);
                strcpy(agenda[i].telefone1,agenda[j].telefone1);
                strcpy(agenda[j].telefone1,auxtelefone);
                strcpy(auxapelido,agenda[i].apelido);
                strcpy(agenda[i].apelido,agenda[j].apelido);
                strcpy(agenda[j].apelido,auxapelido);


            }
        }
	}

       for(i=0;i<n;i++){
		printf("%s\n",agenda[i].nome);
	}

        getch();
}
void listarcontatosordenadosemail (Contato *agenda,int n){
         char auxnome[60],auxemail[60],auxendereco[60],auxtelefone[15],auxapelido[60];int i,j;
        titulolistarcontatosordenadosemail();
        for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if( strcmp(agenda[i].email,agenda[j].email)>0){
                strcpy(auxnome,agenda[i].nome);
                strcpy(agenda[i].nome,agenda[j].nome);
                strcpy(agenda[j].nome,auxnome);
                strcpy(auxemail,agenda[i].email);
                strcpy(agenda[i].email,agenda[j].email);
                strcpy(agenda[j].email,auxemail);
                strcpy(auxendereco,agenda[i].endereco1);
                strcpy(agenda[i].endereco1,agenda[j].endereco1);
                strcpy(agenda[j].endereco1,auxendereco);
                strcpy(auxtelefone,agenda[i].telefone1);
                strcpy(agenda[i].telefone1,agenda[j].telefone1);
                strcpy(agenda[j].telefone1,auxtelefone);
                strcpy(auxapelido,agenda[i].apelido);
                strcpy(agenda[i].apelido,agenda[j].apelido);
                strcpy(agenda[j].apelido,auxapelido);


            }
        }
	}

       for(i=0;i<n;i++){
		printf("%s\n",agenda[i].email);
	}

        getch();
}

void alterarcontato (Contato *agenda,int n){
         int i,c=0; char email[60],endereco[60],nome[60],telefone[15],apelido[60];
         tituloalterarcontato();
         printf("Digite o nome do contato para alterações: ");
         flush_in();
         gets(nome);
           for(i=0;i<n;i++){
            if(strcmp(agenda[i].nome, nome)==0){
             printf("Digite o nome: \n");

          gets(nome);

          printf("Digite o email: \n");
          scanf("%s", &email);


          printf("Digite o endereço: \n");
          flush_in();
          gets(endereco);

          flush_in();
          printf("Digite o telefone: \n");
          gets(telefone);


          flush_in();
          printf("Digite o apelido: \n");
          gets(apelido);

            strcpy(agenda[i].email,email);
            strcpy(agenda[i].endereco1,endereco);
            strcpy(agenda[i].telefone1,telefone);
            strcpy(agenda[i].apelido,apelido);
            strcpy(agenda[i].nome,nome);
            c=c + 1;
            getch();
           }
           }
           if(c==0){
            printf("\nNenhum contato encontrado através do nome %s.\n", nome);
            getch();
           }



}

void removercontato(Contato *agenda, int *n){
      char nome[60],c=0;
      int j,i;
      tituloremover();
      printf("Digite o nome a ser removido: ");
      flush_in();
      gets(nome);
       for(i=0;i <*n;i++){
        if(strcmp(agenda[i].nome,nome)==0){
            c=c+1;
            for(j=i+1;j<*n;j++){
                strcpy(agenda[j-1].nome,agenda[j].nome);
                strcpy(agenda[j-1].telefone1,agenda[j].telefone1);
                strcpy(agenda[j-1].endereco1,agenda[j].endereco1);
                strcpy(agenda[j-1].email,agenda[j].email);
                strcpy(agenda[j-1].apelido,agenda[j].apelido);
            }
            (*n)--;
            i=*n;
        }
       }
        if(c==0){
        printf("Contato não existe");
        getch();
        }
        else{
            printf("Contato apagado:\n");
            getch();
        }
}
void pesquisacontatoapelido (Contato *agenda,int n){
char apelido[60],i,c=0;
         titulopesquisaapelido();
         printf("Digite o apelido: ");
         flush_in();
         gets(apelido);
           for(i=0;i<n;i++){
            if(strcmp(agenda[i].apelido, apelido)==0){
            printf("Nome: %s\n",agenda[i].nome);
            printf("Email: %s\n",agenda[i].email);
            printf("Endereço: %s\n",agenda[i].endereco1);
            printf("Telefone: %s\n",agenda[i].telefone1);

            c=c + 1;
            getch();
           }
           }
           if(c==0){
            printf("\nNenhum contato encontrado através do apelido %s.\n", apelido);
            getch();
           }





}
void listacontatoprimeiraletra (Contato *agenda,int n){
         char nome[3],aux[60]; int i,c=0 ;
         titulolistacontatoprimeiraletra();
         printf("Digite a primeira letra:");
            nome[0]= getchar();


           for(i=0;i<n;i++){
            strcpy(aux,agenda[i].nome);
            aux[0]= getchar ();
            if(aux==nome){
            printf("Nome: %s\n",agenda[i].nome);

            c=c + 1;
            getch();
           }
           }
           if(c==0){
            printf("\nNenhum contato encontrado através do nome %s.\n", nome);
            getch();
           }





}

