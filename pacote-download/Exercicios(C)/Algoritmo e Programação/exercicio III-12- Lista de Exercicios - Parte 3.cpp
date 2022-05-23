#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define tam 6
int main(){
	char texto[7] ="string";
	int i,j,temp,s,t,r,n,g;
	printf("Valor da variavel texto = %s\n", texto);
	printf("\nExiba o vetor!");
	for(i=0;i<tam;i++)
	{
	printf("Valor do elemento %d da string = %c\n",i, texto[i]);
	}
	printf("\n\nInverte o vetor!: ");
	for(i=s,j=g;i<r;i++,j--)
	{
	temp=i;
	i=j;
	j=temp;
	}
	for(i=s;i<g;i++)
	printf("\t%d",i);
	getch();
	return 0;
}
