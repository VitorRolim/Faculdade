//lista de exercicios - exercicio 10
/* Exibir o quadrado de um numero*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
float area(float,float);
int main(){
	setlocale(LC_ALL,"Portuguese");
	float base,expoente;
	printf("Entre com a base:");
	scanf("%f",&base);
	printf("Entre com o expoente:");
	scanf("%f",&expoente);
	area(base,expoente);
	system("pause");
	return 0;
}
	float area(float b,float exp){
	float result;
	result=b*exp/2;
	printf("\nA area é: %f",result);
}
