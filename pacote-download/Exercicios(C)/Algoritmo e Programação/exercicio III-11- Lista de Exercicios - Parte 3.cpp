#include<stdio.h>
#include<stdlib.h>
#define tam 10
int main(){
	float a[tam],b[tam],c[tam];
	int i;
	printf("\nExiba o vetor!");
	for(i=0;i<tam;i++)
	{
	printf("Entre com o elemento %d do vetor A: ",i+1);
	scanf("%f",&a[i]);
	printf("Entre com o elemento %d do vetor b: ",i+1);
	scanf("%f",&b[i]);
	if(i==i){
	c[i]=a[i]*b[i];
}
}
	printf("\nExibindo o novo vetor !");
	for(i=0;i<tam;i++)
	{
		printf("\n%f",c[i]);
	}
	system("pause");
	return 0;
}
