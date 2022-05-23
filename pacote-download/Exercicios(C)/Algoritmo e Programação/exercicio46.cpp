#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade,cont=1,cont21=0,cont50=0;
	printf("Digite uma idade:");
	scanf("%d",&idade);
	while(cont<10){
	     if(idade<21)
   		 cont21++;
		 if(idade>50)
   	 	 cont50++;
		printf("Digite uma idade:");
		scanf("%d",&idade);
		cont++;
    }//fim do while
    if(cont21>0)
  	  printf("\n\tO total de pessoas de menos 20 é: %d",cont21);
    else
        printf("\n\tNenhuma pessoa com 20 anos");
	if(cont50>0)
      printf("\n\tO total de pessoas de mais de 50 é: %d",cont50);
	else
        printf("\n\tNenhuma pessoa com mais de 50 anos\n");
    
    system("pause");
    return 0;
}
