/*exercicio III-2- Lista de Exercicios - Parte 3
Entrar com 3 n�meros e ler em ordem crescente*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"");
	int num1,num2,num3;
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&num3);
	if(num3>num2 && num2>num1)
	{
		printf("\nOs n�meros em ordem crescente s�o: %d, %d, %d",num1,num2,num3);								// 1,2,3 o
	}																											//1,3,2	 o
	else																										//2,1,3  o				o==feito
		if(num2>num3 && num3>num1)																				//2,3,1  o 
		{																										//3,1,2  o
		printf("\nOs n�meros em ordem crescente s�o: %d, %d, %d",num1,num3,num2);								//3,2,1  o
		}
	else  
		if(num1>num2 && num2>num3)
	{
		printf("\nOs n�meros em ordem crescente s�o: %d, %d, %d",num3,num2,num1);		
	}
	else
		if(num2>num1 && num1>num3)
	{
		printf("\nOs n�meros em ordem crescente s�o: %d, %d, %d",num3,num1,num2);		
	}
	else
		if(num3>num1 && num1>num2)
	{
		printf("\nOs n�meros em ordem crescente s�o: %d, %d, %d",num2,num1,num3);		
	}
	else
		if(num3>num2 && num1>num3)
	{
		printf("\nOs n�meros em ordem crescente s�o: %d, %d, %d",num2,num3,num1);		
	}
	system("pause");
	return 0;
}
