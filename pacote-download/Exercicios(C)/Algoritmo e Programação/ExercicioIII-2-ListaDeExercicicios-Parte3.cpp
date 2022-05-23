#include<stdio.h>
#include<stdlib.h>
int main()
{
int numero1, numero2, numero3, troca;

     printf("Digite o primeiro numero inteiro: ");
     scanf("%d", &numero1);
     printf("Digite o segundo  numero inteiro: ");
     scanf("%d",&numero2);
     printf("Digite o terceiro numero inteiro: ");
     scanf ("%d", &numero3);

    if( numero1 > numero2 )
    {
        troca = numero2;
        numero2 = numero1; 
        numero1 = troca;
    }
    if( numero2 > numero3 )
    {
        troca = numero3; 
        numero3 = numero2;
        numero2 = troca;
    }
    if( numero1 > numero2)
    {
        troca = numero2;
        numero2 = numero1;
        numero1 = troca;
    }

    printf("\n%d, %d, %d\n\n",numero1,numero2,numero3);
    system("Pause");
    return(0);
}
