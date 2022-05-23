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
int ins_elem(elemento,int );
elem_lista   elemento;         

int i,num;

elem_lista  *p , *q, *ini;   //variaveis ponteiros /

p = (elem_lista*) malloc (sizeof (elem_lista));  /* aloca um endereço dinâmico para um elemento da lista e guarda no ponteiro p */

ini = p;  /* ini recebe o endereço do inicio da lista */

p-> ant = NULL;

for (i = 0; i <=1; i++)  /* insere 3 elementos na lista */
	{
		printf("\nEntre com um numero: ");
		scanf("%d",&num);
		ins_elem(elemento,num);
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
/*int ins_elem(*,int num){//função para inserir elementoLista* novo = (Lista*) malloc(sizeof(Lista));
      elemento *temporario;
      temporario = (elemento *)malloc(sizeof(celula));
      temporario->conteudo
      temporario->proximo = elemento->prox;
      elemento->prox = temporario;   
     }
}*/

//1-inserir elemento da lista 
//excluir item que o usuario digitous
