#include <stdio.h>											//*=ponteiro
#include <stdlib.h>											//ponteiro armazena o endereço
#include <locale.h>											//valor salario familia
int Multiplos(int);											//função para descontos
int main(){															
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um número: ");
	scanf("%d",&num);
	printf("Multíplos: %d",Multiplos(num));
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
