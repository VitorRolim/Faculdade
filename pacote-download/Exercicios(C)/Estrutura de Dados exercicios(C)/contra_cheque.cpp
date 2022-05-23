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
	printf("\nNome do funcionário:");
	scanf("%s",&nomefunc);
	printf("\nFunção do funcionário:");
	scanf("%s",&funcaofunc);
	printf("\nDigite a matrícula: ");
	scanf("%d",&matricula);
	printf("\nDigite o mês:");
	scanf("%s",&mes);
	printf("\nDigite o ano:");
	scanf("%d",&ano);
	printf("\nDigite o salário:");
	scanf("%f",&salario);
	fgtsresult=salario*PERCFGTS;
	irresult=salario*PERCIR;
	inssresult=salario*PERCINSS;
	totaldesc=fgtsresult+irresult+inssresult;
	valorliquido=salario-fgtsresult-irresult-inssresult;
		printf("\nO nome do funcionário é: %s\n",nomefunc);
	printf("\nA função do funcionário é: %s\n",funcaofunc);
	printf("\nA matrícula do funcionário é: %d\n",matricula);
	printf("\nO mês do contra-cheque é: %s\n",mes);
	printf("\nO ano do contra-cheque é: %d\n",ano);
	printf("\nO salário base do funcinário é: %2.2f\n",salario);
	printf("\nO desconto do FGTS é de: %2.2f \n",fgtsresult);
	printf("\nO desconto do IR é de: %2.2f\n",irresult);
	printf("\nO desconto do INSS é de: %2.2f\n",inssresult);
	printf("\nO desconto total é de: %2.2f\n",totaldesc);
	printf("\nO valor líquido é de: %2.2f\n",valorliquido);
	fgets(nomefunc,21,stdin);
	fgets(funcaofunc,21,stdin);
	fgets(mes,21,stdin);
	system ("pause");
    return 0;
}

