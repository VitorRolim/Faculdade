#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
float peso;
float media10,media20,media30,media30maior;
float peso10=0,peso20=0,peso30=0,peso30maior=0;
int idade,cont=1;
int cont10=0,cont20=0,cont30=0,cont30maior=0;
while (cont<=5){
printf("Digite o seu peso:");
scanf("%f",&peso);
printf("Digite a sua idade:");
    scanf("%d",&idade);
    if(idade<=10){
      peso10=peso10+peso;//peso10+=peso
      cont10++;
    }
    else
        if(idade<=20){
          peso20=peso20+peso;//peso20+=peso
          cont20++;
}
        else
        if(idade<=30){
      peso30=peso30+peso;//peso30+=peso
              cont30++;
}
                else{
                    peso30maior=peso30maior+peso;//peso30maior+=peso
          
cont30maior++;
           }
cont++;
}//fimm do while
//saída faixa etaria ate 10 anos
if(cont10>0){
   media10=peso10/cont10;
   printf("\n\n\tA média ate 10 anos é de %2.2f",media10);
    }
else
    printf("\nNenhuma aluno na faixa etaria de 10 anos");
    //saída faixa etaria ate 20 anos
if(cont20>0){
media20=peso20/cont20;
printf("\n\n\tA média ate 20 anos é de %f",media20);
    }
    else
    printf("\nNenhuma aluno na faixa etaria de 20 anos");
    //saída faixa etaria ate 30 anos
if(cont30>0){
media30=peso30/cont30;
printf("\n\n\tA média ate 30 anos é de %f",media30);
}
    else
    
    printf("\nNenhuma aluno na faixa etaria de 30 anos");
//saída faixa etaria maior que 30 anos
if(cont30>0){
media30maior=peso30maior/cont30maior;
printf("\nA média  30 anos é de %f",media30);
}
else
    printf("\nNenhuma aluno na faixa etaria maior que 30 anos");
    system("pause");
    return 0;
}
