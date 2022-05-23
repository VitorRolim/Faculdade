//contra-cheque com fun��es e struct			//vale refei��o,falta e vale transporte extra
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#define F 120//funcion�rios
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
for(i=0;i<F;i++){//total de funcion�rios
//-----------------------------Entrada de dados------------------------------
	printf("\n----------------Entrada de dados----------------\nNome do funcion�rio: ");
	scanf("%c",&dcc.nomefunc);
	fgets(dcc.nomefunc,21,stdin);
	printf("\nFun��o do funcion�rio: ");
	scanf("%c",&dcc.funcaofunc);
	fgets(dcc.funcaofunc,21,stdin);
	printf("\nDigite a matr�cula: ");
	scanf("%d",&dcc.matricula);
	printf("\nDigite o m�s: ");
	fflush(stdin);
	fgets(dcc.mes,21,stdin);
	printf("\nDigite os dias trabalhados:");
	scanf("%f",&dcc.dias);
	printf("\nDigite o ano: ");
	scanf("%d",&dcc.ano);
	printf("\nDigite o sal�rio: ");
	scanf("%f",&dcc.salario);
	printf("\nDigite o n�mero de filhos: ");
	scanf("%f",&dcc.salariofam);
//-----------------------------Dados dos Funcion�rios------------------------------------------------
	printf("\n----------------Dados do funcion�rio----------------\nO nome do funcion�rio �: %s\n",dcc.nomefunc);
	printf("\nA fun��o do funcion�rio �: %s\n",dcc.funcaofunc);
	printf("\nA matr�cula do funcion�rio �: %d\n",dcc.matricula);
	printf("\nO m�s do contra-cheque �: %s\n",dcc.mes);
	printf("\nA quantidade de dias trabalhados s�o de: %f ",dcc.dias);
	printf("\nO ano do contra-cheque �: %d\n",dcc.ano);
	printf("\nO sal�rio base do funcin�rio �: %2.2f\n",dcc.salario);
	printf("\n----------------Descontos----------------\nO desconto do FGTS � de: %2.2f \n",Calcfgts(dcc.salario));
	printf("\nO desconto do vale refei��o � de: %2.2f",Valerefeicao(dcc.salario));
	printf("\nO desconto do IR � de: %2.2f\n",Calcir(dcc.salario));
	printf("\nO desconto de faltas � de: %2.2f",Faltas(dcc.salario,dcc.dias));
	printf("\nO desconto do vale transporte � de: %2.2f",Valetransp(dcc.salario));
	printf("\nO desconto do INSS � de: %2.2f\n",Calcinss(dcc.salario));
	printf("\nO desconto total � de: %2.2f\n",Totaldesc(dcc.salario,dcc.dias));
	printf("\n----------------Valor L�quido----------------\nO valor l�quido � de: %2.2f\n",Valorliquido(dcc.salario,dcc.salariofam,dcc.dias));
}
printf("\nA quantidade de funcion�rios s�o de: %d",Qtdefunc(i));
printf("\nO total dos sal�rios s�o de: %2.2f\n",Totalsal(dcc.salario));
system ("pause");
return 0;
}
float Calcfgts(float salario){// fun��o do desconto do fgts
float fgtsresult;
fgtsresult=salario*0.08;
return fgtsresult;
}

float Calcir(float salario){// fun��o do desconto do imposto de renda
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

float Calcinss(float salario){// fun��o do desconto do inss
float inssresult;
if(salario<=1750){
inssresult=salario*0.08;
}else if(salario>1750 && salario<=2919){
	inssresult=salario*0.09;
}else
	inssresult=salario*0.11;
return inssresult;
}


float Salfam(float salariofam){// fun��o do salario familia
if(salariofam=0){
	salariofam=0;
}else if(salariofam>0){
	salariofam=20;
}else{
	salariofam=30;
}
return salariofam;
}

float Totaldesc(float salario,float dias){// fun��o do total de desconto
	float totaldesc;
	totaldesc=Calcfgts(salario)+Calcir(salario)+Calcinss(salario)+Faltas(salario,dias)+Valetransp(salario)+Valerefeicao(salario);
	return totaldesc;
}

float Totalvencim(float salario,float salariofam){// fun��o do total de vencimento
float vencresult;
vencresult=salario+salariofam;
return vencresult;
}

float Valorliquido(float salario,float salariofam,float dias){// fun��o do valor liquido
float valorliquido;
valorliquido=Totalvencim(salario,salariofam)-Totaldesc(salario,dias);
return valorliquido;
}

int Qtdefunc(int i){//fun��o quantidade de funcion�rios
int qtdefunc,soma=0;
for(i=0;i<=F;i++){
				  qtdefunc = soma +i;
				  }
return qtdefunc;
}

float Totalsal(float salario){//fun��o do total de sal�rias da empresa
	  int i;
	  float soma = 0;
	  float mediasal;
	  for(i=0;i<F;i++){
				  soma = soma + salario;
				  }
	  return soma;
}
float Faltas(float salario,float dias){//fun��o de faltas
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
float Valerefeicao(float salario){//fun��o do vale refei��o
	float desc,descrefeicao=0.05;//vale-refei��o 15% do sal�rio
		desc=salario*descrefeicao;
		return desc;
	}
float Valetransp(float salario){//fun��o do vale-tansporte
	float desc,descvaltrans=0.06;
	desc=salario*descvaltrans;
	return desc;
}
	

