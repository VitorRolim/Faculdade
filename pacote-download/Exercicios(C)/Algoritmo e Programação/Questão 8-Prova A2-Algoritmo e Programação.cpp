//Questão 8-Prova A2-Algoritmo e Programação
#include<stdio.h>
#include<stdlib.h>
#define tam 10
int main()
{
	int i,vet[tam],cont21=0,cont50=0;
	printf("\nExibindo a idade das pessoas!");
	for(i=0;i<tam;i++)
	{
		printf("\nEntre com idade da pessoa: \n");
		scanf("%d",&vet[i]);
		if(vet[i]<21)
		cont21++;
		if(vet[i]>50)
		cont50++;
	}
	printf("\nO total de pessoas menores de vinte um anos eh de: %d ",cont21);
	printf("\nO total de pessoas menores de vinte um anos eh de: %d ",cont50);
	system("pause");
	return 0;
}
