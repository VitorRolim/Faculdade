#include<stdio.h>		//Calcular a qte de alunos que estão com a media menor que a media da turma
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
float Med_menor(int,float);
int main(){
	setlocale(LC_ALL,"portuguese");
	float *v;
	int qte_alunos,i,med;//amm=aluno com nota menor que a media
	float media_aluno;
	printf("\nEntre com a quantidade de alunos da sala:");
	scanf("%d",&qte_alunos);
	v= (float *) malloc(qte_alunos*sizeof(float));
	printf("\nOs alunos abaixo da media sao: %2.f",Med_menor(qte_alunos,media_aluno));
	free(v);
	getch;
	return (0);
}
float Med_menor(int qte_alunos,float media_aluno){
	int amm=0,i;
	float *v;
	for(i=0;i<qte_alunos;i++){
		printf("\nEntre com a média do aluno :");
		scanf("%f",&media_aluno);
		v= (float *) malloc(media_aluno*sizeof(float));
			if(media_aluno<7){
				amm++;
			}else{
				printf("\nO aluno nao esta abaixo da media");
			}
			}
			return amm;
	}
