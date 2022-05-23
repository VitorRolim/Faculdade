#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float quadrado(float);
int main(){
	float valor1;
	printf("Entre com o valor: ");
	scanf("%f",&valor1);
	quadrado(valor1);
	system("pause");
	return 0;
}
	float quadrado(float val1){
		float result;
		result=pow(val1,2);
		printf("\nO quadrado do numero é %f",result);
	}
