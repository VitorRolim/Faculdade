/*exercicio III-1- Lista de Exercicios - Parte 3 
Informar se o n�mero � divisivel ou n por 5*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"");
	int num1,num2,num3;
	printf("\nEntre com um n�mero: ");
	scanf("%d",&num1);
	printf("\nEntre com um n�mero: ");
	scanf("%d",&num2);
	printf("\nEntre com um n�mero: ");
	scanf("%d",&num3);
	if(num1%5==0)
	{
		printf("\nO n�mero � divis�vel por 5",num1);
	}
	else
	{
		printf("\nO n�mero n�o � divis�vel por 5",num1);
	}
		if(num2%5==0)
		{
			printf("\nO n�mero � divis�vel por 5",num2);
		}
		else
		{
			printf("\nO n�mero n�o � divis�vel por 5",num2);
		}
			if(num3%5==0)
			{
				printf("\nO n�mero � divis�vel por 5",num3);
			}
			else
			{
				printf("\nO n�mero n�o � divis�vel por 5",num3);
			}
			
	system("pause");
	return 0;
}
