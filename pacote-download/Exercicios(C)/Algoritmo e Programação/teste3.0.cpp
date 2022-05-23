#include<stdio.h>
#include<stdlib.h>
int main(){
	int vet[10];
	int i;
	printf("\nExiba a carga da Matriz !");
	for(i=0;i<10;i++){
			printf("\nElemento[%d]",i+1);
			scanf("%d",&vet[i]);
	}
	printf("\nExiba a matriz A !");
	for(i=0;i<10;i++){
			printf("\n%d",vet[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
