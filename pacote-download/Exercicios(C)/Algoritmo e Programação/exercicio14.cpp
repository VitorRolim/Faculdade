//Fun��o de uma potencia
/*Exercicio13		Data:20/03/18*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
void potencia(int,int);
int main(){
	setlocale(LC_ALL,"portuguese");
	int base,expoente;
    printf("Entre com a base:");
	scanf("%d",&base);
	printf("Entre com o expoente:");
	scanf("%d",&expoente);
	potencia(base,expoente);
	system("pause");
	return 0;
}
//Fim da Fun��o main
//Fun��o 1 
	void potencia(int base,int expoente){
	int result;
	result=base^expoente;
	printf("\nA base � %d o expoente � %d resultado �: %d",base,expoente,result);
}
