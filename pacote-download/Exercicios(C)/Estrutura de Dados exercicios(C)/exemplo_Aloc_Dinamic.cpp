#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
int main(void){
	setlocale(LC_ALL,"Portuguese");
	float *v;
	int i,num_componentes;
	printf("Informe o n?meros de componentes do vetor\n");
	scanf("%d",&num_componentes);
	v= (float *) malloc(num_componentes*sizeof(float));
	for(i=0;i<num_componentes;i++){
		printf("\nDigite o valor para posicao %d do vetor: ", i+1);
		scanf("%f",&v[i]);
	}
	printf("\n*******Valores do vetor dinamico*******\n");
	for(i=0;i<num_componentes;i++){
		printf("%.2f\n",v[i]);
	}
	free(v);
	getch;
	return (0);
}

