//contra-cheque
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define PERCFGTS 0.08
#define PERCIR 0.075
#define PERCINSS 0.09
int main(void){
	setlocale(LC_ALL,"portuguese");
	char nomefunc[21],funcaofunc[21],mes[21];
	int ano,matricula;
	float salario,fgtsresult,valorliquido,irresult,inssresult,totaldesc;
	printf("\nNome do funcion�rio:");
	scanf("%s",&nomefunc);
	printf("\nFun��o do funcion�rio:");
	scanf("%s",&funcaofunc);
	printf("\nDigite a matr�cula: ");
	scanf("%d",&matricula);
	printf("\nDigite o m�s:");
	scanf("%s",&mes);
	printf("\nDigite o ano:");
	scanf("%d",&ano);
	printf("\nDigite o sal�rio:");
	scanf("%f",&salario);
	fgtsresult=salario*PERCFGTS;
	irresult=salario*PERCIR;
	inssresult=salario*PERCINSS;
	totaldesc=fgtsresult+irresult+inssresult;
	valorliquido=salario-fgtsresult-irresult-inssresult;
		printf("\nO nome do funcion�rio �: %s\n",nomefunc);
	printf("\nA fun��o do funcion�rio �: %s\n",funcaofunc);
	printf("\nA matr�cula do funcion�rio �: %d\n",matricula);
	printf("\nO m�s do contra-cheque �: %s\n",mes);
	printf("\nO ano do contra-cheque �: %d\n",ano);
	printf("\nO sal�rio base do funcin�rio �: %2.2f\n",salario);
	printf("\nO desconto do FGTS � de: %2.2f \n",fgtsresult);
	printf("\nO desconto do IR � de: %2.2f\n",irresult);
	printf("\nO desconto do INSS � de: %2.2f\n",inssresult);
	printf("\nO desconto total � de: %2.2f\n",totaldesc);
	printf("\nO valor l�quido � de: %2.2f\n",valorliquido);
	fgets(nomefunc,21,stdin);
	fgets(funcaofunc,21,stdin);
	fgets(mes,21,stdin);
	system ("pause");
    return 0;
}

