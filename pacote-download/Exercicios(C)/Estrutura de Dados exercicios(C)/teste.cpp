#include <stdio.h>
#include <stdlib.h>

#define M 3
struct 
	   {
			char nome[30];
			float salario;
			int idade;
			int num;
			char sexo;
			}dados[M];
float media_salario(){
	  int i;
	  float soma = 0;
	  for(i=0;i<M;i++){
				  soma = soma + (dados[i].salario);
				  }
	  float media;
	  media = soma/M;
	  return (media);  
} 
float media_filhos(){
	  int i;
	  float soma = 0;
	  for(i=0;i<M;i++){
				  soma = soma + (dados[i].num);
				  }
	  float media;
	  media = soma/M;
	  return (media);  
} 
float maior(){
	  float maior;
	  maior = dados[0].salario;
	  int i;
	  for(i=0;i<M;i++){
					   if(dados[i].salario > maior){
										   maior = dados[i].salario;
										   }
										   }
	  return(maior);
}	 
float percentual(){
	  int i;
	  int count = 0;
	  for(i=0;i<M;i++){
				 if(dados[i].sexo == 'f' && dados[i].salario > 1000){
								 count++;
								 }
								 }
	  float perc;
	  perc = (count * 100) / (float) M;
	  return (perc);
}					 
int main(){
	int i;
	for(i=0;i<M;i++){
			 printf("Digite o nome\n");
			 scanf("%s",dados[i].nome);
			 fflush(stdin);
			 printf("Digite o salario \n");
			 scanf("%f",&dados[i].salario);
			 fflush(stdin);
			 printf("Digite a idade\n");
			 scanf("%d",&dados[i].idade);
			 fflush(stdin);
			 printf("Digite o numero de filhos\n");
			 scanf("%d",&dados[i].num);
			 fflush(stdin);
			 printf("Informe o sexo: \n (m) masculino \n (f) feminino ");
			 scanf("%c",&dados[i].sexo);
			 fflush(stdin);
			 }
	printf("A media de salario e: \n %f \n",media_salario());
	printf("A media do numero de filhos e: \n %f \n",media_filhos());
	printf("O maior salario e: \n %f \n",maior());
	printf("O percentual de mulheres com salario superior a R$1000 e: \n %f % \n",percentual());
	system("PAUSE");
	return(0);
}
