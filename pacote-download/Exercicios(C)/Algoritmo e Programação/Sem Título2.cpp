#include<stdio.h>
#include<stdlib.h>
int main(){
	int valor1,valor2;
	float soma;
    printf("Entre com primeiro valor:");
	scanf("%d",valor1);
	printf("Entre com segundo valor:");
	scanf("%d",valor2);
	soma=valor1+valor2;
	printf("\nA soma é %d",soma);
	system("pause");
	return 0;
}
