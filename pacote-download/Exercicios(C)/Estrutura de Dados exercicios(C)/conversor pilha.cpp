#include<stdio.h>
#include<stdlib.h>
#define TAM_VET 10
#define VERD 1
#define FALS 0
#define ERRO -1

void Inic_Pilha(int &topo)
{
	topo = -1;
}

int Pilha_Vazia(int topo)
{
	if(topo == -1)
	return(VERD);
	return(FALS);
}

int Pilha_Cheia(int topo)
{
	if(topo == TAM_VET-1)
	return(VERD);
	return(FALS);
}

int Empilha(float p[], int &topo, float x)
{
	if(topo == TAM_VET-1)
	{
		printf("Erro - Ins. Pilha Cheia");
		return(ERRO);
	}
	else
	{
		topo++;
		p[topo] = x;
	}
	return(VERD);
}

int Desempilha(float p[], int &topo, float &x)
{
	if(topo == -1)
	{
		printf("Erro - Pilha Vazia");
		return(ERRO);
	}
	else
	{
		x = p[topo];
		topo--;
	}
	return(VERD);
}

int main()
{
    float P[TAM_VET];
    int Topo;
    int ok,op=0;
    float num;
    Inic_Pilha(Topo);
    while(op != 3)
	{
		printf("\nMenu\n1- Inserir numero\n2- Excluir numero\n3- Fim\nOpcao: ");
		scanf("%d",&op);
        if(op == 1) 
		{
	printf("\nEntre com o numero decimal: ");
     scanf("%d",&num);

     while((num!=0))
     {
       if(!Pilha_Cheia(Topo))
          {
          Empilha(P,Topo,num);
          num=num/2;
          }
       else
          {
          printf("nStack overflow");
          exit(0);
          }
     }
			/*printf("\nDigite um numero: "); 
            scanf("%f",&dado);
            Empilha(P,Topo,dado);*/
        }
        else 
		if(op == 2) 
		{
			printf("n");
    		while(!Desempilha(P,Topo,num))
       		{
       		num=Desempilha(P,Topo,num);
       		printf("%d",num);
       		}	
			/*ok = Desempilha(P,Topo,x);
            if(ok != ERRO) 
            printf("\nElemento removido: %f",num);
        */
		}
    }
    return 0;
}
