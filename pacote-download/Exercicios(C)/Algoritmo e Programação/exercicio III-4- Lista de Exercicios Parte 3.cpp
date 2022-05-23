#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"");
	int cart,idade,sexo,cartm,cartf,prov,pessoaf,pessoam;
	float mediaidade;
	for(cart=1;cart<=1000;cart++)//numeros indeterminado de cartões
	{
		while(cart<=1000)
		{
			printf("Digite a idade da pessoa: ");
			scanf("%d",&idade);
			printf("\t\nDigite 0 para masculino ou 1 para feminino: ");
			scanf("%d",&sexo);
			if(sexo==0)
			{
				printf("\t\nO sexo é masculino\t\n",sexo);
				cartm++;
			}
				if(sexo==1)
				{
					printf("\t\nO sexo é feminino\t\n",sexo);
					cartf++;
				}
		cart++;
		}
		if(idade>15 && idade<25)
		{
			pessoaf=cartf;
			printf("\nNo total há %d pessoas do sexo feminino entre 15 e 25",pessoaf);
		}
		prov=idade/cartf;
		mediaidade=idade+prov/cartm;
		printf("\nA idade média das pessoas são de %.2f",mediaidade);
		if(cartm>1)
		{
		pessoam=cartm;
		printf("\nNo total há %d pessoas do sexo masculino",cartm);
		}
			else
			printf("\nNão existe pessoas do sexo masculino",cartm);
	}
	printf("\nA idade do ultimo cartão é igual a zero! ");
	system("pause");
	return 0;
}
