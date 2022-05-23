//Converter Celsuius para Fahrenheit
/*Exercicio 9
Autor:xxxx               Data:13/03/18 */
#include<stdio.h>
#include<stdlib.h>
int main (){
    float tempc,tempf;
    printf("Entre com a temperatura em Celsius:");
    scanf("%f",&tempc);
    tempf=(float)9/5*tempc+32;
    printf("\n A temperatura em Fahrenheit é %f",tempf);  
    system ("pause");
    return 0;
}


