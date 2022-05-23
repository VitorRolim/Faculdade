//exercicio47
#include<stdio.h>
#include<stdlib.h>
int main(){
float vet[10];
int i;
printf("\nCarga do Vetor! ");
for(i=0;i<10;i++){
printf("Entre com o elemento %d: ",i+1);
scanf("%f",&vet[i]);
}
printf("\nExibe o vetor!");
for(i=0;i<10;i++)
printf("\n%.2f",vet[i]);
printf("\n\n");
system("pause");
return 0;
}

