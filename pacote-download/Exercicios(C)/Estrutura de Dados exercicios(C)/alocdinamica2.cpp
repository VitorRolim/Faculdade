#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void) 
{
	float *v;
	int i, num_alunos;
	printf("Informe o numero de alunos do vetor\n");
	scanf("%d", &num_alunos);
	v = (float *) malloc(num_alunos * sizeof(float));
	for(i=0;i<num_alunos;i++)
	{
		printf("\nDigite o a media para a posicao %d do vetor:",i+1);
		scanf("%f",&v[i]);
	}
	for(i=0;i<num_alunos;i++)
	{
		printf("%.2f\n",v[i]);
	}
	free(v);
	getch();
}
