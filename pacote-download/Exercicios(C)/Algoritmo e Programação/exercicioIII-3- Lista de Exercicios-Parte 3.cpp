/*exercicio III-3- Lista de Exercicios - Parte 3
Entrar com um n�mero e verificar se ele � primo*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"");
	int num, i, resultado = 0;
 	printf("Digite um n�mero: ");
 	scanf("%d", &num);
 	for (i = 2; i <= num / 2; i++) 
	 {
    if (num % i == 0) {
       resultado++;
       break;
    }
 	}
 	if (resultado == 0)
    	printf("%d � um n�mero primo\n", num);
 	   else
    		printf("%d n�o � um n�mero primo\n", num);
	system("pause");
	return 0;
}
