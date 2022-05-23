#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	float num1,num2,result;
	char op;
	printf("Entre com o primeiro numero:");
	scanf("%f",&num1);
	printf("Entre com o segundo numero:");
	scanf("%f",&num2);
	fgetc(stdin);
	printf("Digite operacao: ");
	scanf("%c",op);
	if(op=='+')
	{
		result=num1+num2;
		printf("\nA soma é: %2.2f",result);
			system("pause");
			return 0;	
    }
}
