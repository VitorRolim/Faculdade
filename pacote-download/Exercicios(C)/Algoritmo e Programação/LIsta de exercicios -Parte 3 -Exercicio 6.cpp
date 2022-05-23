#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL,"");
	int voto,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,total=0,totalvenc=0;
	float   percnulo,percbranco;
	do
	{
		printf("Entre com o seu voto: ");
		scanf("%d",&voto);
		switch(voto)
		{
  			case 1: cont1++;
					break;
  			case 2: cont2++;
					break;
  			case 3: cont3++;
					break;
  			case 4: cont4++;
					break;
  			case 5: cont5++;
					break;
		}//FIM DO SWITCH
	}//Fim do while
	  while (voto!=6);
	if ((cont1>2) && (cont1>3))
	{
		printf("\nO cand. 1 venceu com %d dos votos",cont1);//Candidato
		printf("\nOs outros cand. obtiveram %d votos",cont2+cont3);//Candidatos
	}
	else
		if(cont2>cont3)
		{
			printf("\nO cand. 2 venceu com %d votos",cont2);
			printf("\nOs outros cand. obtiveram %d votos",cont1+cont3);
		}
	else
		if(cont2>cont3)
		{
			printf("\nO cand. 3 venceu com %d votos",cont3);
			printf("\nOs outros cand. obtiveram %d votos",cont1+cont2);
		}
	total= cont1+cont2+cont3+cont5;
	percnulo=(cont4*100)/total;
	percbranco=(cont5*100)/total;
	printf("\nO candidato 1 recebeu %d votos",cont1);
	printf("\nO candidato 2 recebeu %d votos",cont2);
	printf("\nO candidato 3 recebeu %d votos",cont3);
	printf("\nQuantidade de votos nulos = %d",cont4);
	printf("\nQuantidade de votos em branco = %d",cont5);
	printf("\nQuantidade de votos nulos = %.2f",percnulo);
	printf("\nQuantidade de votos em branco = %.2f",percbranco);
	printf("\nQuantidade de total de votos = %d\n\n",total);
	system("pause");
	return 0;
}
