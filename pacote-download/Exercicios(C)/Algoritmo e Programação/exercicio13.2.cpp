#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void subtracao(int,int);
void multiplicacao(int,int);
void divisao(int,int);
int main(){
	setlocale(LC_ALL,"portuguese");
	int valor1,valor2;
    printf("Entre com primeiro valor:");
	scanf("%d",&valor1);
	printf("Entre com segundo valor:");
	scanf("%d",&valor2);
	soma(valor1,valor2);
	system("pause");
	return 0;
} 
//Fim da main
//Declaração das funções
	void soma(int val1,int val2){
	int result;
	result=val1+val2;
	printf("\nA soma é %d",result);	
}
	void subtracao(int val1,int val2){
	int result;
	result=val1-val2;
	printf("\nA subtração é %d",result);
}
	void multiplicacao(int val1,int val2){
	int result;
	result=val1*val2;
	printf("\nA multiplicação é %d",result);
}
	void divisao(int val1,int val2){
	int result;
	result=val1/val2;
	printf("\nA divisão é %d",result);
}
