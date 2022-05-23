#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<malloc.h>
#define VERD 1
#define FALS 0
typedef struct item 
{
	int numero;
	struct item *anterior;
}
Elemento;
void inicializar(Elemento **topo)
{
	*topo = NULL;
}
int estavazia(Elemento **topo)
{
	if(*topo == NULL)
	return VERD;
	else
	return FALS;
}
void Empilhar(Elemento **topo, int elemento)
{
	Elemento *novo;
	novo = (Elemento *)malloc(sizeof(Elemento));
	novo->numero = elemento;
	novo->anterior = *topo;
	*topo = novo;
}
int Desempilhar(Elemento **topo)
{
	Elemento *antigo;
	antigo = *topo;
	int result;
	if(estavazia(topo))
	{
		printf("\n Pilha Vazia! \n");
	}
	else
	{
		result = (*topo)->numero;
		*topo = (*topo)->anterior;
		free(antigo);
		return result;
	}
}
void mostrarpilha(Elemento *topo)
{
	int i = 0;
	Elemento *item;
	printf("\n\n Listando...\n\n");
	printf("-----------------------------------------\n");
	if(estavazia(&topo))
	{
		printf("A pilha esta vazia!\n");
	}
	else
	{
		item = topo;
		while(item != NULL)
		{
			i++;
			printf("[%d] -> %d\n",i, item->numero);
			item = item->anterior;
		}
	}
	printf("--------------------------------------------\n\n\n");
}

int Conversao(Elemento **Topo,int num){
	int bin[10], aux, aux2;
	 for (aux = 9; aux >= 0; aux--) {
        if (num % 2 == 0) {
            bin[aux] = 0;
            num = num / 2;
        }
        else {
            bin[aux] = 1;
            num = num / 2;
        }
    }

    for (aux = 0; aux <= 9; aux++) {
        printf("%d", bin[aux]);
    }

    return  bin[aux];
}

void menu()
{
	printf("\n\nDigite a sua escolha: \n"
	"        1 - Empilhar elemento \n"
	"        2 - Desempilhar \n"
	"        3 - Finalizar \n"
	"? ");
}
int main()
{
	setlocale(LC_ALL,"Portuguese");
	Elemento *topo = NULL;
	int opcao;
	int numero;
	menu();
	scanf("%d", &opcao);
	while(opcao != 3)
	{
		switch(opcao)
		{
			case 1:
				printf("Digite o número decimal que vai ser convertido: ");
    			scanf("%d",&numero);
				Empilhar(&topo, numero);
				mostrarpilha(topo);
				Conversao(&topo,numero);
				break;
			case 2:
				numero = Desempilhar(&topo);
				printf("\nValor do elemento desempilhado %d", numero);
				mostrarpilha(topo);
				break;
			default:
				printf("Escolha invalida.\n\n");
				break;
		}
		menu();
		scanf("%d", &opcao);
	}
	printf("\nOs números empilhados foram: ");
	mostrarpilha(topo);
}
