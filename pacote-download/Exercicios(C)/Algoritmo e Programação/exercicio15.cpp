//soma dos quadrados
/*Exercicio13		Data:20/03/18*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
void quadrado(int,int,int);
int main(){
	setlocale(LC_ALL,"portuguese");
	int lado1,lado2,lado3;
	float soma;
    printf("Entre com primeiro lado:");
	scanf("%d",&lado1);
	printf("Entre com segundo lado:");
	scanf("%d",&lado2);
	printf("Entre com terceiro lado:");
	scanf("%d",&lado3);
	soma(lado1,lado2,lado3);
	system ("pause");
	return 0;
}
//Fim da main
//Declaração das funções
	void quadrado(int lad1,int lad2,int lad3){
	int result;
	result=sqrt(pow(lado1,2)+pow(lado2,2)+pow(lado3,2);
	printf("\nA soma dos quadrados é %d",result);
}
