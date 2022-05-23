//Questão 9-Prova A2-Algoritmo e Programação
#include<stdio.h>
#include<stdlib.h>
#define taml 5
#define tamc 5
int main()
{
	int i,j,matriz[taml][tamc],maior=0,menor=10000;											// 0.0 	0.1	0.2	0.3	0.4
	printf("\nExibindo a matriz!");															// 1.0 	1.1	1.2	1.3	1.4
	for(i=0;i<taml;i++){																	// 2.0 	2.1	2.2	2.3	2.4
		for(j=0;j<tamc;j++){																// 3.0 	3.1	3.2	3.3	3.4
		printf("\nEntre com o elemento");													// 4.0 	4.1	4.2	4.3	4.4
		scanf("%d",&matriz[i][j]);
		if(i==4)
		if(matriz[i][j]>maior)
			maior=matriz[i][j];
		if(j==2)
		if(matriz[i][j]<menor)
			menor=matriz[i][j];
	}
	}
	printf("\nO maior valor da quinta linha: %d ",maior);
	printf("\nO menor valor da terceira coluna: %d ",menor);
	system("pause");
	return 0;
}
