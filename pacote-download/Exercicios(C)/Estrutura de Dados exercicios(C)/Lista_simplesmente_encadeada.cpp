#include<stdio.h>						//struct estatica(.)   struct dinamico(->)
#include<stdlib.h>

typedef struct elemento{
	int conteudo;
	struct elemento *prox;
}elem_lista;
int main(){
	elem_lista *prox;
	int i;
	elem_lista *p,*q,*ini;
	p=(elem_lista*)malloc(sizeof(elem_lista));//função para alocar dinamicamente um endereço de memoria
	ini=p;
	for(i=0;i>10;i++){
		prox->conteudo=i*3;
		q=(elem_lista*)malloc(sizeof(elem_lista));
		p->prox=q;
		p=q;
	}
	p->prox=NULL;
	p=ini;
	while(p->prox!=NULL){
		printf("conteudo=%d\n",p->conteudo);
		p=p->prox;
	}
	printf("Termino de exibicao da lista\n");
	p=ini;
	while(p->prox!=NULL){
		q=p;
		p=p->prox;
	}
	q->prox=NULL;
	free(p);
	printf("Exibicao da lista sem o ultimo elemento");
	p=ini;
	while(p->prox!=NULL){
		printf("conteudo=%d\n",p->conteudo);
		p=p->prox;
	}
	return 0;
}




/*exercicio
1-iniciar um elemento no final da fila
2-excluir o elemento da fila
3-Verificar se um determinado número(conteúdo) encontra-se na lista*/

