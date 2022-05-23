#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
/*typedef struct elemento {
	struct elemento *ant;
	int informacao;
	struct elemento *prox;
}Elemento;
int main(){
	void Menu();
	void Remover_Elemento(Elemento **inicio);
	void ini_lista(Elemento **inicio);
	void Inserir_elem(Elemento **inicio);
	void Mostralista(Elemento **inicio);
	Elemento elemento;
	int i,num,opcao;
	Elemento *p,*q,*ini;
	p = (Elemento*) malloc (sizeof(Elemento));
	ini = p;
	p->ant = NULL;
	ini_lista(&ini);
	for(i=0;i<10;i++){
	
	Menu();
	scanf("%d",&opcao);
	while(opcao != 3){
		switch(opcao){
		case 1:
		Inserir_elem(&ini);
		break;
		case 2:
		Mostralista(&ini);
		case 3:
			Remover_Elemento(&ini);
			break;
		/*p->informacao=num;
		q = (Elemento*) malloc (sizeof(Elemento));
		p->prox = q;
		q->ant = p;
		p = q;
		//Mostralista(&ini,num);
	}
	}
}
	Mostralista(&ini);
	//p->informacao = i * 2;
	//p->prox = NULL;
	//p = ini;
	}
	
void ini_lista(Elemento **inicio){
	 (*inicio)->prox = NULL;
	}
	
	
void Inserir_elem(Elemento **inicio){
	Elemento *temporario;
	int num;
	temporario = (Elemento*) malloc(sizeof(Elemento));
	printf("\nEntre com um numero: ");
	scanf("%d",&num);
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
}*/
#include <stdlib.h>
#include <stdio.h>


     // criar uma lista linear duplamente encadeada, inserir  10 elementos  inteiros e depois exibir os elementos inseridos  /


typedef  struct elemento  elem_lista;  // define o tipo do registro lista com o nome de elem_lista /

struct elemento {
    	   struct elemento *ant;   	  //endereço do nó anterior 
           int         conteudo;          // define a estrutura do registro elemento   
           struct  elemento *prox; 	  //endereço do nó próximo
           };

int main()
{

elem_lista   elemento;         

int i;

elem_lista  *p , *q, *ini;   //variaveis ponteiros /

p = (elem_lista*) malloc (sizeof (elem_lista));  /* aloca um endereço dinâmico para um elemento da lista e guarda no ponteiro p */

ini = p;  /* ini recebe o endereço do inicio da lista */

p-> ant = NULL;

for (i = 0; i <=1; i++)  /* insere 3 elementos na lista */
	{
	p->conteudo = i *2;

	q = (elem_lista*) malloc (sizeof (elem_lista)); /* função malloc aloca um endereço para um elemento da lista e guarda no ponteiro q  */


	p-> prox = q;

	q-> ant = p;
	p = q;

	}


p->conteudo = i*2;

p-> prox = NULL;  /* ponteiro do ultimo elemento da lista */


p = ini;   /* p recebe o endereco  do primeiro elemento da lista */

printf ("endereço primeiro elemento = %u\n", ini);

do

	{

	printf ("p->ant = %u\n", p->ant);

	printf ("p = %u\n", p);

	printf ("conteudo = %d\n", p->conteudo);

        printf ("p->prox = %u\n", p->prox);
        	       
	p = p-> prox;
                   
	printf (" --------------\n");
	}

 while ( p->prox !=NULL);  /* caminha na lista e exibe o conteúdo da lista */
        

printf ("p->ant = %u\n", p->ant);

printf ("p = %u\n", p);

printf ("conteudo = %d\n", p->conteudo);

printf ("p->prox = %u\n", p->prox);
        	       
 

return 0;
}

