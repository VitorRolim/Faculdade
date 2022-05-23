//exercicio48
#include<stdio.h>
#include<stdlib.h>
int main(){
float a[10],b[10],c[10];
int i;
printf("\nCarga dos Vetores!");
for(i=0;i<10;i++){
printf("Entre com o elemento  do vetor A: ");
scanf("%f",&a[i]);
printf("Entre com o elemento  do vetor b: ");
scanf("%f",&b[i]);
c[i]=a[i]+b[i];
}
printf("\nExiba o vetor C!");
for(i=0;i<10;i++)
printf("\n%.2f",c[i]);
printf("\n\n");
system("pause");
return 0;
}

