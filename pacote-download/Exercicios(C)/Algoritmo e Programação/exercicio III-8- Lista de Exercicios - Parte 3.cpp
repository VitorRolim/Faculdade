//Receber 2 valores e informar se o primeiro é divisivel pelo segundo
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	int val1,val2;
	setlocale(LC_ALL,"");
	printf("Entre com um valor: ");
	scanf("%d",&val1);
	printf("Entre com um valor: ");
	scanf("%d",&val2);
	if(val1%val2==0){
			printf("\nO valor 1 é divisível pelo valor 2");
		}
		else
			printf("\nO valor 1 não é divisível pelo valor 2");
			
	system("pause");
	return 0;
}

