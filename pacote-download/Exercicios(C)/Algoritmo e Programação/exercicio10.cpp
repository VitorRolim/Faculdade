//Trocar os valores das variáveis A e B
/*Exercicio 10
Autor:xxxx               Data:13/03/18 */
#include<stdio.h>
#include<stdlib.h>
int main (){
	int a,b,temp;
	printf("Entre com a variavel A:");
    scanf("%d",&a);
    printf("Entre com a variavel B:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n Os valores finais das variaveis sao %d,%d",a,b);
    system("pause");
    return 0;
}
