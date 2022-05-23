#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM_VET 5
#define VERD 1
#define FALSO 0
#define ERRO -1
int Conversao(int,int);
void inic_Pilha(int &Topo){
	Topo=-1;
}
int pilha_vazia(int Topo){
	if(Topo==-1)return (VERD);return (FALSO);
}
int pilha_cheia(int Topo){
	if(Topo==TAM_VET-1)return (VERD);return(FALSO);
}
int empilhar_Pilha(float P[],int &Topo,int x){
	if(Topo==TAM_VET-1){
		printf("Erro-Pilha Cheia");
		return(ERRO);
	}else{	
	Topo++;
	P[Topo]=x;
}return (VERD);
}
int desemp_Pilha(float P[],int &Topo,int &x){
	if(Topo==-1){
		printf("Erro-Pilha vazia");
		return (ERRO);
	}else{
	x=P[Topo];
	Topo--;
}return (VERD);
}
int Conversao(int Topo,int num){
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
int main(){
	setlocale(LC_ALL,"Portuguese");
	float P[TAM_VET];
	int Topo;
	int ok,op=0;
	int num;
	inic_Pilha(Topo);
	while(op!=3){
		printf("\n\nMenu\n1-Inserir\n2-Excluir\n3-Fim\nEscolha: ");
		scanf("%d",&op);
		if(op==1){	
		printf("Digite o número decimal que vai ser convertido: ");
    	scanf("%d", &num);
		empilhar_Pilha(P,Topo,num);
		Conversao(Topo,num);
	}else if(op==2){
			ok=desemp_Pilha(P,Topo,num);
			if(ok!=ERRO)
			
		printf("\nElemento removido: %d",num);
	}
	}
	printf("Elementos empilhados: %d\n",Topo+1);
	//printf("Média dos elementos empilhados: %f\n",Media_elementos(Topo,dado));
	system ("pause");
	return 0;
}
