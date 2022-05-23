//exercicio51
#include<stdio.h>
#include<stdlib.h>
int main(){
    int vet[10],i,j,temp;
	printf("\nCarga do Vetor !: \n ");
	for(i=0;i<10;i++)
	{
	printf("\n\tEntre com o elemento %d: ",i+1);
	scanf("%d",&vet[i]);
    }
	printf("\n\nInverte o vetor!: ");
	for(i=0,j=9;i<5;i++,j--)	
	{
		temp=vet[i];
		vet[i]=vet[j];
		vet[j]=temp;
	}
	printf("\n\nExibe o valor invertido !: \n");
	for(i=0;i<10;i++)
	{
		printf("\t%d",vet[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}

