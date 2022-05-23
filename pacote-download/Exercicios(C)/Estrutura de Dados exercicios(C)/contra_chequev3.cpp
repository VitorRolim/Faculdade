//contra-cheque com funções e struct
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
	struct Dados_Contra_Cheque{
	char nomefunc[21],funcaofunc[21],mes[21];
	int ano,matricula;
	float salario,salariofam;
};
struct Dados_Contra_Cheque dcc;
	printf("\n----------------Entrada de dados----------------\nNome do funcionário:");
	fflush(stdin);
	fgets(dcc.nomefunc,21,stdin);
	printf("\nFunção do funcionário:");
	fflush(stdin);
	fgets(dcc.funcaofunc,21,stdin);
	printf("\nDigite a matrícula: ");
	scanf("%d",&dcc.matricula);
	printf("\nDigite o mês:");
	fflush(stdin);
	fgets(dcc.mes,21,stdin);
	printf("\nDigite o ano:");
	scanf("%d",&dcc.ano);
	printf("\nDigite o salário:");
	scanf("%f",&dcc.salario);
	printf("\nDigite o número de filhos:");
	scanf("%f",&dcc.salariofam);
	//fgtsresult=salario*PERCFGTS;
	//irresult=salario*PERCIR;
	//inssresult=salario*PERCINSS;
	//totaldesc=fgtsresult+irresult+inssresult;
	//valorliquido=salario-fgtsresult-irresult-inssresult;
	printf("\n----------------Dados do funcionário----------------\nO nome do funcionário é: %s\n",dcc.nomefunc);
	printf("\nA função do funcionário é: %s\n",dcc.funcaofunc);
	printf("\nA matrícula do funcionário é: %d\n",dcc.matricula);
	printf("\nO mês do contra-cheque é: %s\n",dcc.mes);
	printf("\nO ano do contra-cheque é: %d\n",dcc.ano);
	printf("\nO salário base do funcinário é: %2.2f\n",dcc.salario);
	printf("\n----------------Descontos----------------\nO desconto do FGTS é de: %2.2f \n",Calcfgts(dcc.salario));
	printf("\nO desconto do IR é de: %2.2f\n",Calcir(dcc.salario));
	printf("\nO desconto do INSS é de: %2.2f\n",Calcinss(dcc.salario));
	printf("\nO desconto total é de: %2.2f\n",Totaldesc(dcc.salario));
	printf("\n----------------Valor Líquido----------------\nO valor líquido é de: %2.2f\n",Valorliquido(dcc.salario,dcc.salariofam));
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


