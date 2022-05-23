//contra-cheque com funções e struct			//vale refeição,falta e vale transporte extra
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#define F 120//funcionários
float Calcfgts(float);
float Calcir(float);
float Calcinss(float);
float Totalvencim(float,float);
float   Faltas(float,float);
float Salfam(float);//salario familia com filhos de ate 14 anos
float Totaldesc(float,float);
float Valerefeicao(float);
float Valetransp(float);
float Valorliquido(float,float,float);
float Totalsal(float);
int Qtdefunc(int i);
int main(void){
	setlocale(LC_ALL,"portuguese");
	int i;
	struct Dados_Contra_Cheque{
	char nomefunc[21],funcaofunc[21],mes[21];
	int ano,matricula;
	float salario,salariofam,dias;
};
struct Dados_Contra_Cheque dcc;
for(i=0;i<F;i++){//total de funcionários
//-----------------------------Entrada de dados------------------------------
	printf("\n----------------Entrada de dados----------------\nNome do funcionário: ");
	scanf("%c",&dcc.nomefunc);
	fgets(dcc.nomefunc,21,stdin);
	printf("\nFunção do funcionário: ");
	scanf("%c",&dcc.funcaofunc);
	fgets(dcc.funcaofunc,21,stdin);
	printf("\nDigite a matrícula: ");
	scanf("%d",&dcc.matricula);
	printf("\nDigite o mês: ");
	fflush(stdin);
	fgets(dcc.mes,21,stdin);
	printf("\nDigite os dias trabalhados:");
	scanf("%f",&dcc.dias);
	printf("\nDigite o ano: ");
	scanf("%d",&dcc.ano);
	printf("\nDigite o salário: ");
	scanf("%f",&dcc.salario);
	printf("\nDigite o número de filhos: ");
	scanf("%f",&dcc.salariofam);
//-----------------------------Dados dos Funcionários------------------------------------------------
	printf("\n----------------Dados do funcionário----------------\nO nome do funcionário é: %s\n",dcc.nomefunc);
	printf("\nA função do funcionário é: %s\n",dcc.funcaofunc);
	printf("\nA matrícula do funcionário é: %d\n",dcc.matricula);
	printf("\nO mês do contra-cheque é: %s\n",dcc.mes);
	printf("\nA quantidade de dias trabalhados são de: %f ",dcc.dias);
	printf("\nO ano do contra-cheque é: %d\n",dcc.ano);
	printf("\nO salário base do funcinário é: %2.2f\n",dcc.salario);
	printf("\n----------------Descontos----------------\nO desconto do FGTS é de: %2.2f \n",Calcfgts(dcc.salario));
	printf("\nO desconto do vale refeição é de: %2.2f",Valerefeicao(dcc.salario));
	printf("\nO desconto do IR é de: %2.2f\n",Calcir(dcc.salario));
	printf("\nO desconto de faltas é de: %2.2f",Faltas(dcc.salario,dcc.dias));
	printf("\nO desconto do vale transporte é de: %2.2f",Valetransp(dcc.salario));
	printf("\nO desconto do INSS é de: %2.2f\n",Calcinss(dcc.salario));
	printf("\nO desconto total é de: %2.2f\n",Totaldesc(dcc.salario,dcc.dias));
	printf("\n----------------Valor Líquido----------------\nO valor líquido é de: %2.2f\n",Valorliquido(dcc.salario,dcc.salariofam,dcc.dias));
}
printf("\nA quantidade de funcionários são de: %d",Qtdefunc(i));
printf("\nO total dos salários são de: %2.2f\n",Totalsal(dcc.salario));
system ("pause");
return 0;
}
float Calcfgts(float salario){// função do desconto do fgts
float fgtsresult;
fgtsresult=salario*0.08;
return fgtsresult;
}

float Calcir(float salario){// função do desconto do imposto de renda
float irresult;
if(salario<=1903.98){
irresult=salario*0;
}else if(salario>1903.98 && salario<=2826.65){
irresult=salario*0.075;
}else if(salario>2826.65 && salario<=3751.05){
irresult=salario*0.15;
}else if(salario>3751.05 && salario<=4664.68){
irresult=salario*0.225;
}else if(salario>4664.68){
irresult=salario*0.275;
}
return irresult;
}

float Calcinss(float salario){// função do desconto do inss
float inssresult;
if(salario<=1750){
inssresult=salario*0.08;
}else if(salario>1750 && salario<=2919){
	inssresult=salario*0.09;
}else
	inssresult=salario*0.11;
return inssresult;
}


float Salfam(float salariofam){// função do salario familia
if(salariofam=0){
	salariofam=0;
}else if(salariofam>0){
	salariofam=20;
}else{
	salariofam=30;
}
return salariofam;
}

float Totaldesc(float salario,float dias){// função do total de desconto
	float totaldesc;
	totaldesc=Calcfgts(salario)+Calcir(salario)+Calcinss(salario)+Faltas(salario,dias)+Valetransp(salario)+Valerefeicao(salario);
	return totaldesc;
}

float Totalvencim(float salario,float salariofam){// função do total de vencimento
float vencresult;
vencresult=salario+salariofam;
return vencresult;
}

float Valorliquido(float salario,float salariofam,float dias){// função do valor liquido
float valorliquido;
valorliquido=Totalvencim(salario,salariofam)-Totaldesc(salario,dias);
return valorliquido;
}

int Qtdefunc(int i){//função quantidade de funcionários
int qtdefunc,soma=0;
for(i=0;i<=F;i++){
				  qtdefunc = soma +i;
				  }
return qtdefunc;
}

float Totalsal(float salario){//função do total de salárias da empresa
	  int i;
	  float soma = 0;
	  float mediasal;
	  for(i=0;i<F;i++){
				  soma = soma + salario;
				  }
	  return soma;
}
float Faltas(float salario,float dias){//função de faltas
	float descsal;
	if(dias=30){
		descsal=salario*0;
	}
	else if(dias<25){
		descsal=salario*0.1;
	}else if(dias<=20){
		descsal=salario*0.15;
	}else if(dias<=15){
		descsal=salario*0.30;
	}else{
		descsal=salario*0.50;
	}
	return descsal;
}
float Valerefeicao(float salario){//função do vale refeição
	float desc,descrefeicao=0.05;//vale-refeição 15% do salário
		desc=salario*descrefeicao;
		return desc;
	}
float Valetransp(float salario){//função do vale-tansporte
	float desc,descvaltrans=0.06;
	desc=salario*descvaltrans;
	return desc;
}
	

