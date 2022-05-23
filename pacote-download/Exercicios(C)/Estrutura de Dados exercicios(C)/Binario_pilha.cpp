#include <stdio.h>
#include <stdlib.h>
#define TAM_VET 32 //32 bits
#define VERD 1
#define FALSO 0
#define ERRO -1
void inic_Pilha(int &Topo){
	Topo=-1;
}
int pilha_vazia(int Topo){
	if(Topo==-1)return (VERD);return (FALSO);
}
int pilha_cheia(int Topo){
	if(Topo==TAM_VET-1)return (VERD);return(FALSO);
}
int empilhar_Pilha(float P[],int &Topo,float x){
	if(Topo==TAM_VET-1){
		printf("Erro-Pilha Cheia");
		return(ERRO);
	}else{	
	Topo++;
	P[Topo]=x;
}return (VERD);
}
int desemp_Pilha(float P[],int &Topo,float &x){
	if(Topo==-1){
		printf("Erro-Pilha vazia");
		return (ERRO);
	}else{
	x=P[Topo];
	Topo--;
}return (VERD);
}
int Conversao_bin(int n,int r,int i){
 int n; // N�mero de entrada
 int r; // Resultado do deslocamento
 int i; // Contador
  
 // L� o n�mero
 printf("Digite o numero: ");
 scanf("%d", &n);
  
 // Utiliza um n�mero de 32 bits como base para a convers�o.
 for(i = 8; i >= 0; i--) {
    // Executa a opera��o shift right at� a 
    // �ltima posi��o da direita para cada bit.
    r = n >> i;
         
    // Por meio do "e" l�gico ele compara se o valor 
    // na posi��o mais � direita � 1 ou 0 
    // e imprime na tela at� reproduzir o n�mero bin�rio.
    if(r & 1) {
        printf("1");
    } else {
        printf("0");
    }
}
}
/*float Media_elementos(int Topo, float dado){
	float media;
	media=dado/Topo;
	return media;
}*/

int main(){
	float P[TAM_VET];
	int Topo;
	int ok,op=0;
	int main() {
 	int n; // N�mero de entrada
 	int r; // Resultado do deslocamento
 	int i; // Contador
	inic_Pilha(Topo);
	while(op!=3){
		printf("\n\nMenu\n1-Inserir\n2-Excluir\n3-Fim\nEscolha: ");
		scanf("%d",&op);
		if(op==1){	
		printf("\nDigite o n�mero: ");
		scanf("%d",&n);
		empilhar_Pilha(P,Topo,n);
	}else if(op==2){
			ok=desemp_Pilha(P,Topo,n);
			if(ok!=ERRO)
			
		printf("\nElemento removido: %f",n);
	}
	}
	printf("Elementos empilhados: %d\n",Topo);
	//printf("M�dia dos elementos empilhados: %f\n",Media_elementos(Topo,dado));
	system ("pause");
	return 0;
}
