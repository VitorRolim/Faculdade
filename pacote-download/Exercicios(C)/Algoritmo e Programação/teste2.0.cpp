//exercicio49
#include<stdio.h>
#include<stdlib.h>
#define tam 12
int main(){
int a[tam],b[tam],i;
printf("\nCarga do Vetor A!: ");
for(i=0;i<tam;i++){
printf("Entre com o elemento %d: ",i+1);
scanf("%d",&a[i]);
if(i%2==0)
b[i] = 2*a[1];
else
b[i] = 3*a[1];
}
printf("\nExiba o vetor B!: ");
for(i=0;i<tam;i++)
printf("\n%d",b[i]);
printf("\n\n");
system("pause");
return 0;
}
