#include <stdio.h>
#include <stdlib.h>

/*
   Estrutura  que define a Lista
   Lembrando que a a instru��o: struct celulaLista *proximo
   � uma estrutura auto-referenciada, ou seja, neste caso
   � uma estrutura que aponta para a pr�xima estrutura.
*/
typedef struct agenda{
	struct agenda *ant;
	char nome[42];
	int informacao;
	int dia;//dia em n�mero
	int mes;//m�s em n�mero
	int ano;
	int telefone;
	struct agenda *prox;
}agenda_lista;

int main(){
   // Declara��es
      agenda_lista *pLista;
      int opcao = 0;
   // Fun��es
      void initLista(agenda_lista **p);
      void insertLista(agenda_lista **p);
      void buscaListaSimples(agenda_lista **p);
      void removeElementoListaSimples(agenda_lista **p);
      int leValor(int *valorRecebido);
   // Instru��es
      pLista = (agenda_lista *)malloc(sizeof(agenda_lista));
      initLista(&pLista);
      for(;;){
         printf("\n1 - Inserir : ");
         printf("\n2 - Consultar: ");
         printf("\n3 - Remover");
         printf("\n4 - Sair\n");
         scanf("%d", &opcao);
         opcao = leValor(&opcao);
         switch(opcao)
         {
            case 1:
          insertLista(&pLista);
          break;
       case 2:
          buscaListaSimples(&pLista);
          break;
       case 3:
         removeElementoListaSimples(&pLista);
         break;
       case 4:
         exit(0);
        }
     }
     return 0;
}
/*
   Inicializa��o da Lista Encadeada
*/
void initLista(agenda_lista **p){
   (*p)->prox = NULL;
}

/*
   Fun��o para Inser��o no In�cio
*/
void insertLista(agenda_lista **p){
   // Declara��es
      agenda_lista *temporario;
      int dia;
   // Instru��es
      printf("\nDigite o dia do aniversario do amigo: ");
      scanf("%c", &dia);
      temporario = (agenda_lista *)malloc(sizeof(agenda_lista));
      temporario->dia = dia;
      temporario->prox = (*p)->prox;
      (*p)->prox = temporario;   
}
/*
   Fun��o para Percorrer Elementos
*/
void buscaListaSimples(agenda_lista **p){
   // Declara��es
      agenda_lista *temporario;
   // Instru��es
      if((*p)->prox == NULL){
         printf("Lista Vazia!\n");
      }
      else{
         temporario = (agenda_lista *)malloc(sizeof(agenda_lista));
         temporario = (*p)->prox;
         while(temporario != NULL){
            printf("Valor : %d\n", temporario->informacao);
            temporario = temporario->prox;
         }
      }   
}
/*
   Remove Elemento da Cabe�a
*/
void removeElementoListaSimples(agenda_lista **p){
   // Declara��es
      agenda_lista *temporario;
   // Instru��es
      if((*p)->prox == NULL){
         printf("\nLista Vazia!");
      }
      else{
         temporario = (*p)->prox;
         (*p)->prox = temporario->prox;
         free(temporario);
      }
}
/*
   Op��o para Valida��o da Entrada
*/
int leValor(int *valorRecebido){
   // Declara��es
   // Instru��es
      while((*valorRecebido > 4) || (*valorRecebido < 1)){
         printf("Opcao Invalida. Informe novamente : \n");
         scanf("%d", &(*valorRecebido));
      }
      return(*valorRecebido);
}






































/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
   Estrutura  que define a Lista
   Lembrando que a a instru��o: struct celulaLista *proximo
   � uma estrutura auto-referenciada, ou seja, neste caso
   � uma estrutura que aponta para a pr�xima estrutura.

 struct data{
	int dia;//dia em n�mero
	int mes;//m�s em n�mero
	int ano;
};

 struct agenda{
	char nome[42];
	struct data data_nascimento;
	int telefone;
};

typedef struct elemento{
	struct elemento *ant;
	int informacao;
	struct elemento *prox;
	struct agenda contato;
}Elemento;

int main(){
	setlocale(LC_ALL,"Portuguese");
	void Menu();
	Elemento elemento;
	int opcao;
	Elemento *p,*q,*ini;
	p = (Elemento*) malloc (sizeof(Elemento));
	ini=p;
	p->ant=NULL;
	Menu();
	scanf("%d",&opcao);
	while(opcao != 3){
	switch(opcao){
		case 1:
			printf("\nDigite o nome do amigo:");
			scanf("%c",&p->contato);
			printf("\nDigite o dia(em n�mero) do nascimento do amigo:");
			scanf("%d",&p->contato);
			printf("\nDigite o m�s(em n�mero) do nascimento do amigo:");
			scanf("%d",&p->contato);
			printf("\nDigite o ano do nascimento do amigo:");
			scanf("%d",&p->contato);
			printf("\nDigite o telefone do amigo:");
			scanf("%d",&p->contato);
			break;
		case 2:
			exit(0);
	}
}
	p->prox=NULL;
	p=ini;
	system("pause");
	return 0;
}


void Inserir_amigo(Elemento **ini){
	Elemento *p,*q;
	q = (Elemento*) malloc(sizeof(Elemento));
	printf("\nDigite o nome do amigo:");
			scanf("%c",&p->contato);
			printf("\nDigite o dia(em n�mero) do nascimento do amigo:");
			scanf("%d",&p->contato);
			printf("\nDigite o m�s(em n�mero) do nascimento do amigo:");
			scanf("%d",&p->contato);
			printf("\nDigite o ano do nascimento do amigo:");
			scanf("%d",&p->contato);
			printf("\nDigite o telefone do amigo:");
			scanf("%d",&p->contato);
			p->prox=q;
			q->ant=p;
			p=q;
}

void Menu(){
	printf("\nDigite um n�mero para:\n"
	"\n1-Inserir um amigo na agenda\n"
	"\n2-Excluir um amigo na agenda\n"
	"\n3-Digite o nome do amigo para retornar a data de nascimento\n"
	"\n4-Listar os amigos que anivers�rio no mesmo m�s\n"
	"\n5-Finalizar");
}*/
