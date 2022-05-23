#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int CalcSoma(int, int);
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2;
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);
	printf("Somatório: %d",CalcSoma(n1,n2));
	return 0;
}
int CalcSoma(int x, int y){
	return x+y;
}
