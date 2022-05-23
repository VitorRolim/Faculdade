#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
typedef struct elemento {
	struct elemento *ant;
	int informacao;
	struct elemento *prox;
}Elemento;
int main(){
	void Menu();
	void Remover_Elemento(Elemento **inicio);
	void ini_lista(Elemento **inicio);
	void Inserir_elem(Elemento **inicio,int num);
	void Mostralista(Elemento **inicio);
	Elemento elemento;
	int i,num,opcao;
	Elemento *p,*q,*ini;
	p = (Elemento*) malloc (sizeof(Elemento));
	ini = p;
	p->ant = NULL;
	ini_lista(&ini);
	Menu();
	scanf("%d",&opcao);
	while(opcao != 3){
		switch(opcao){
		case 1:
		printf("\nEntre com um numero: ");
		scanf("%d",&num);
		Inserir_elem(&ini,num);
		break;
		case 2:
		Mostralista(&ini);
		case 3:
			Remover_Elemento(&ini);
				printf("\nO numero desemplihado foi: %d",&num);
				Mostralista(&ini);
			break;
		/*p->informacao=num;
		q = (Elemento*) malloc (sizeof(Elemento));
		p->prox = q;
		q->ant = p;
		p = q;*/
		//Mostralista(&ini,num);
	}
	Menu();
	scanf("%d",&opcao);
	}
	Mostralista(&ini);
	//p->informacao = i * 2;
	//p->prox = NULL;
	//p = ini;
	}
	
void ini_lista(Elemento **inicio){
	 (*inicio)->prox = NULL;
	}
	
	
void Inserir_elem(Elemento **inicio,int num){
	Elemento *temporario;
	temporario = (Elemento*) malloc(sizeof(Elemento));
	temporario->informacao = num;
	temporario->prox = (*inicio)->prox;
	(*inicio)->prox = temporario;	
}

void Remover_Elemento(Elemento **inicio){
	Elemento *temporario;
	temporario = (Elemento*) malloc (sizeof(Elemento));
	if((*inicio)->prox == NULL){
		printf("\nA lista está vazia!\n");
	}else{
	temporario->prox=(*inicio)->prox;
	(*inicio)->prox = temporario->prox;
	free(temporario);
	printf("elemento removido: %d",temporario);
}
}
void Mostralista(Elemento **inicio){
	Elemento *temporario;
	if((*inicio)->prox==NULL){
		printf("\nA lista está vazia");
	}else{
		temporario = (Elemento*) malloc (sizeof(Elemento));
		temporario = (*inicio)->prox;
		while(temporario!=NULL){
		printf("Valor : %d\n", temporario->informacao);
		//printf("Valor : %d\n", num);
            temporario = temporario->prox;
	}
		
	}
}
void Menu(){
	printf("1-Inserir\n"
	"\n2-Exibir Lista\n"
	"\n3-Remover elemento da lista\n"
	"\n4-Finalizar\n");
}
