//contra-cheque com fun��es
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define PERCFGTS 0.08
#define PERCIR 0.075
#define PERCINSS 0.09
float Calcfgts(float);
float Calcir(float);
float Calcinss(float);
float Totalvencim(float,float);
float Salfam(float);
float Totaldesc(float);
float Valorliquido(float,float);
int main(void){
	setlocale(LC_ALL,"portuguese");
	char nomefunc[21],funcaofunc[21],mes[21];
	int ano,matricula;
	float salario,salariofam;
	printf("\n----------------Entrada de dados----------------\nNome do funcion�rio:");
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
	printf("\nDigite o n�mero de filhos:");
	scanf("%f",&salariofam);
	//fgtsresult=salario*PERCFGTS;
	//irresult=salario*PERCIR;
	//inssresult=salario*PERCINSS;
	//totaldesc=fgtsresult+irresult+inssresult;
	//valorliquido=salario-fgtsresult-irresult-inssresult;
	printf("\n----------------Dados do funcion�rio----------------\nO nome do funcion�rio �: %s\n",nomefunc);
	printf("\nA fun��o do funcion�rio �: %s\n",funcaofunc);
	printf("\nA matr�cula do funcion�rio �: %d\n",matricula);
	printf("\nO m�s do contra-cheque �: %s\n",mes);
	printf("\nO ano do contra-cheque �: %d\n",ano);
	printf("\nO sal�rio base do funcin�rio �: %2.2f\n",salario);
	printf("\n----------------Descontos----------------\nO desconto do FGTS � de: %2.2f \n",Calcfgts(salario));
	printf("\nO desconto do IR � de: %2.2f\n",Calcir(salario));
	printf("\nO desconto do INSS � de: %2.2f\n",Calcinss(salario));
	printf("\nO desconto total � de: %2.2f\n",Totaldesc(salario));
	printf("\n----------------Valor L�quido----------------\nO valor l�quido � de: %2.2f\n",Valorliquido(salario,salariofam));
	fgets(nomefunc,21,stdin);
	fgets(funcaofunc,21,stdin);
	fgets(mes,21,stdin);
	system ("pause");
    return 0;
}
float Calcfgts(float salario){
float fgtsresult;
fgtsresult=salario*PERCFGTS;
return fgtsresult;
}
float Calcir(float salario){
float irresult;
irresult=salario*PERCIR;
return irresult;
}
float Calcinss(float salario){
float inssresult;
inssresult=salario*PERCINSS;
return inssresult;
}
float Salfam(float salariofam){
if(salariofam=0){
	salariofam=0;
}else if(salariofam>0){
	salariofam=20;
}else{
	salariofam=30;
}
return salariofam;
}
float Totaldesc(float salario){
	float totaldesc;
	totaldesc=Calcfgts(salario)+Calcir(salario)+Calcinss(salario);
	return totaldesc;
}
float Totalvencim(float salario,float salariofam){
float vencresult;
vencresult=salario+salariofam;
return vencresult;
}
float Valorliquido(float salario,float salariofam){
float valorliquido;
valorliquido=Totalvencim(salario,salariofam)-Totaldesc(salario);
return valorliquido;
}


