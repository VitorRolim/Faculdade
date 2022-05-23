//lista de exercicios - exercicio 8
/* Exibir o quadrado de um numero*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
void quadrado(float);
int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1;
	printf("Entre com um numero:");
	scanf("%f",&num1);
	quadrado(num1);
	system("pause");
	return 0;
}
	void quadrado(float n1){
	float result;
	result=pow(n1,2);
	printf("O quadrado do número é: %f",result);
	}
