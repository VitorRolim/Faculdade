#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
//transformar imc e contra-cheque em struct
int main(){
	struct atleta{
		int matricula;
		char nome[50],consideracao[20];
		float altura,peso,imc;
	};
	struct atleta a1;
	printf("\n---------- Cadastro do atleta -----------\n\n");
	printf("\nDigite a matricula do atleta: ");
	scanf("%d",&a1.matricula);
	printf("\nDigite o nome do atleta: ");
	fflush(stdin);
	fgets(a1.nome,50,stdin);
	printf("\nConsideracao: ");
	fflush(stdin);
	fgets(a1.consideracao,20,stdin);
	printf("\nDigite a altura do atleta :  ");
	scanf("%f",&a1.altura);
	printf("\nDigite o peso do atleta :");
	scanf("%f",&a1.peso);
	a1.imc=a1.peso/pow(a1.altura,2);
	printf("\n\n --------- Lendo os dados da struct ---------\n\n");
	printf("\nNome ...........: %s", a1.nome);
  	printf("\nMatricula .....: %d", a1.matricula);
  	printf("\nAltura .....: %f", a1.altura);
  	printf("\nPeso .....: %f", a1.peso);
  	printf("\nImc.....: %f", a1.imc);
  	getch();
  	return 0;
}
