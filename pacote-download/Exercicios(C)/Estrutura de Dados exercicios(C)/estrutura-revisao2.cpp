#include <stdio.h>											//*=ponteiro
#include <stdlib.h>											//ponteiro armazena o endere�o
#include <locale.h>											//valor salario familia
int Multiplos(int);											//fun��o para descontos
int main(){															
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	printf("Mult�plos: %d",Multiplos(num));
}
int Multiplos(int num){
	int qtd=0,i;
	for(i=1;i<=num;i++)
	{
	if(num%2==0 && num%3==0){
		qtd++;
	}
	return qtd;
}

}
