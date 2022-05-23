#include<stdio.h>
#include<stdlib.h>
typedef struct elem_lista{
	int conteudo;
	struct elem_lista *prox;
}elemento;
int main(){
	elemento *p;//struct elemento
	int valor;
	int opcao=0,i;
	void inilista(elemento **pRecebido);
	void InserirLista(elemento **pRecebido,int valor);
	void ConsultarLista(elemento **pRecebido);
	void RemoverLista(elemento **pRecebido);
	int leValor(int *valorRecebido);
	p=(elemento*)malloc(sizeof(struct elem_lista));
	inilista(&p);
	for(i=0;i<10;i++){
		printf("\n1-Inserir");
		printf("\n2-Consultar");
		printf("\n3-Remover");
		printf("\n4-Sair");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
			printf("\nEntre com o valor: ");
			scanf("%d",&valor);
			InserirLista(&p,valor);
			break;
			case 2:
				ConsultarLista(&p);
				break;
				case 3:
					RemoverLista(&p);
					break;
					case 4:
						exit(0);
		}
	}
	return 0;
}
void inilista(elemento **pRecebido){
	(*pRecebido)->prox=NULL;
}

void InserirLista(elemento **pRecebido,int valor){
	elemento *temporario;
	temporario=(elemento*)malloc(sizeof(elemento));
	temporario->conteudo=valor;
	temporario->prox=(*pRecebido)->prox;
	(*pRecebido)->prox=temporario->prox;
}
void ConsultarLista(elemento **pRecebido){
	elemento *temporario;
	if((*pRecebido)->prox==NULL){
		printf("\nLista Vazia !");
	}else{
		temporario=(elemento*)malloc(sizeof(elemento));
		temporario=(*pRecebido)->prox;
		while(temporario!= NULL){
			printf("\nValor: %d",temporario->conteudo);
			temporario=temporario->prox;
		}
	}
}
void RemoverLista(elemento **pRecebido){
	elemento *temporario;
	if((*pRecebido)->prox==NULL){
		printf("\nLista Vazia !");
	}else{
		temporario=(*pRecebido)->prox;
		(*pRecebido)->prox=temporario->prox;
		free(temporario);
	}
}
int leValor(int *valorRecebido){
   // Declarações
   // Instruções
      while((*valorRecebido > 4) || (*valorRecebido < 1)){
         printf("Opcao Invalida. Informe novamente : \n");
         scanf("%d", &(*valorRecebido));
      }
      return(*valorRecebido);
}
