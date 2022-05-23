//lista de exercicios - exercicio 9
/* Exibir o quadrado de um numero*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
float soma(float,float);
int main(){
	setlocale(LC_ALL,"Portuguese");
	float numero1,numero2;
	printf("Entre com o primeiro numero:");
	scanf("%f",&numero1);
	printf("Entre com o segundo numero:");
	scanf("%f",&numero2);
	soma(numero1,numero2);
	system("pause");
	return 0;
}
	float soma(float num1,float num2){
	float result;
	result=num1+num2;
	printf("O resultado da soma é: %f",result);
}
