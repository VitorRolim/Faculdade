#include<stdio.h>
#include<stdlib.h>
int main(){
	float a[15],b[15],maior=0,menor=100;
	int i;
	printf("\nCarga dos Vetores!");
	for(i=0;i<10;i++){
	printf("Entre com o elemento  do vetor A: ");
	scanf("%f",&a[i]);
	printf("Entre com o elemento  do vetor b: ");
	scanf("%f",&b[i]);
	if(a[i]>maior)
	maior=a[i];
	if(a[i]<menor)
	menor=a[i];
	if(b[i]>maior)
	maior=b[i];
	if(b[i]<menor)
	menor=b[i];
}
	printf("\nO maior elemento é %f :",a[i],maior);
	printf("\nO menor elemento é %f :",a[i],menor);
	printf("\nO maior elemento é %f :",b[i],maior);
	printf("\nO menor elemento é %f :",b[i],menor);
	system("pause");
	return 0;
}
