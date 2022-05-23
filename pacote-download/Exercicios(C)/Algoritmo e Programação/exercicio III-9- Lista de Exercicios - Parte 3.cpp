#include<stdio.h>
#include<stdlib.h>
int invertervet(int,int,int,int);
int main()
{
	int invertervet(int vet[10],int i,int j,int temp);
	system("pause");
	return 0;	
}
	int invertervet(int vet[10],int i,int j,int temp){
	printf("\nCarga do Vetor !: \n ");
	for(i=0;i<10;i++){
	printf("Entre com o elemento %d: ",i+1);
	scanf("%d",&vet[i]);
}
	printf("\n\nInverte o vetor!: ");
	for(i=0,j=9;i<5;i++,j--){
	temp=vet[i];
	vet[i]=vet[j];
	vet[j]=temp;
}
	printf("\n\nExibe o valor invertido !: \n");
	for(i=0;i<10;i++)
	printf("\t%d",vet[i]);
}
