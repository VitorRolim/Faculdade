#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void quadrado(float);
int main(){
	float valor1;
	printf("Entre com primeiro valor:");
	scanf("%f",&valor1);
	quadrado(valor1);
	system("pause");
	return 0;
}

void quadrado(float val1){
float result;
	result=pow(val1,2);
	printf("\nO resultado e %f",result);
}
