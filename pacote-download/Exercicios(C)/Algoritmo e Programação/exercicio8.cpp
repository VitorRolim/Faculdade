//Calcular a hipotenusa
/*Exercicio 8
  autor:xxxx              Data:13/03/18*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
    float lado1,lado2,hipo;
    printf("Entre com o primeiro lado: ");
    scanf("%f",&lado1);
    printf("Entre com o segundo lado: ");
    scanf("%f",&lado2);
    hipo=sqrt(pow(lado1,2)+ pow(lado2,2));
    printf("\n A primeira hipotesua é %f",hipo);
    system ("pause");
    return 0;
}
