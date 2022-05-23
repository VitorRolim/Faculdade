#include <stdlib.h>
#include <stdio.h>

typedef struct arvore{
	int num;
	struct arvore* noesq;
	struct arvore* nodir;
}arvore;

arvore* createArvore(){
	return NULL;
};
int arvorevazia(arvore* r ){
	return r == NULL;
}

void mostrarArvore(arvore* r){
	if(r!= NULL){
		mostrarArvore(r->noesq);
		printf("%d\n",r->num);
		mostrarArvore(r->nodir);
	}
}
void inserirArvore(arvore** r,int num){//r==raiz
	if(*r == NULL){
		*r = (arvore*)malloc(sizeof(arvore));//aloca espa�o na mem�ria
		(*r)->noesq = NULL;
		(*r)->nodir = NULL;
		(*r)->num = num;
	}else{
		if(num < (*r)->num){
			/*Usando a recursividade*/
			inserirArvore(&(*r)->noesq,num);//& -> vai chamar fun��o
		}
		else{
			if(num > (*r)->num){
			/*Inserindo a fun��o */
			inserirArvore(&(*r)->nodir,num);//& -> chamando a fun��o
			}
		}
}
}
int main(){
	arvore* r = createArvore();
	inserirArvore(&r,15);
	inserirArvore(&r,14);
	inserirArvore(&r,11);
	inserirArvore(&r,17);
	inserirArvore(&r,20);
	printf("Imprimindo a arvore em ordem\n");
	mostrarArvore(r);
	system("pause");
	return 0;
}
