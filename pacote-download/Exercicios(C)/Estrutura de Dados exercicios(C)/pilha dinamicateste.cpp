#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define VERD 1
#define FALS 0
typedef struct item 
{
	int informacao;
	struct item *anterior;
}
Elemento;
void Inicializar(Elemento **topo)
{
	*topo = NULL;
}

void Empilhar(Elemento **topo,int elemento){
	Elemento *novo;//var auxiliar
	novo = (Elemento*)malloc(sizeof(Elemento));//alocar espaço na memória
	novo->informacao = elemento;
	novo->anterior = *topo;
	*topo=novo;
}
int Desempilhar(Elemento **topo){
	Elemento *antigo;
	antigo = *topo;
	int result;
	if(Estavazia(&topo))
	{
		printf("\nA pilha está vazia: ");
	}else{
		result = (*topo)->informacao;
		*topo = (*topo)->anterior;
		free(antigo);
		return result;
	}
}

int Estavazia(Elemento **topo){
	if(*topo == NULL){
	
	return VERD;
	}else
	return FALS;
}
void Mostrarpilha(Elemento *topo)
{
	int i = 0;
	Elemento *item;
	printf("\n\n Listando...\n\n");
	printf("-----------------------------------------\n");
	if(Estavazia(&topo))
	{
		printf("A pilha esta vazia!\n");
	}
	else
	{
		item = topo;
		while(item != NULL)
		{
			i++;
			printf("[%d] -> %d\n",i, item->informacao);
			item = item->anterior;
		}
	}
}
void menu(){
	printf("\nDigite a sua escolha:"
	"		1-Empilhar    \n "
	"		2-Desempilhar    \n " 
	"       3-Finalizar");
}


int main(){
	int elemento;
	Elemento *topo;
	int numero,opcao;
	Inicializar(&topo);
	menu();
	scanf("%d",&opcao);
	while(opcao!=3){
		switch(opcao){
			case 1:
				printf("\nEntre com um numero: ");
				scanf("%d",&numero);
				Empilhar(&topo,elemento);
				Mostrarpilha(topo);
			break;
			case 2:
				numero = Desempilhar(&topo);
				printf("\nO numero desemplihado foi: %d",&numero);
				Mostrarpilha(topo);
			break;
			default:
				printf("\nEscolha inválida: ");
				break;
	}
}
	system("pause");
	return 0;
	
}
