#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL,"");
	int cart,idade,sexo,cartm,cartf,prov,pessoaf,pessoam;
	float mediaidade;
	for(cart=1;cart<=1000;cart++)//numeros indeterminado de cart�es
	{
		while(cart<=1000)
		{
			printf("Digite a idade da pessoa: ");
			scanf("%d",&idade);
			printf("\t\nDigite 0 para masculino ou 1 para feminino: ");
			scanf("%d",&sexo);
			if(sexo==0)
			{
				printf("\t\nO sexo � masculino\t\n",sexo);
				cartm++;
			}
				if(sexo==1)
				{
					printf("\t\nO sexo � feminino\t\n",sexo);
					cartf++;
				}
		cart++;
		}
		if(idade>15 && idade<25)
		{
			pessoaf=cartf;
			printf("\nNo total h� %d pessoas do sexo feminino entre 15 e 25",pessoaf);
		}
		prov=idade/cartf;
		mediaidade=idade+prov/cartm;
		printf("\nA idade m�dia das pessoas s�o de %.2f",mediaidade);
		if(cartm>1)
		{
		pessoam=cartm;
		printf("\nNo total h� %d pessoas do sexo masculino",cartm);
		}
			else
			printf("\nN�o existe pessoas do sexo masculino",cartm);
	}
	printf("\nA idade do ultimo cart�o � igual a zero! ");
	system("pause");
	return 0;
}
