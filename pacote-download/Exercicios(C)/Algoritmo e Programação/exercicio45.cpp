#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int num,fat;
printf("Digite um número:");
scanf("%d",&num);
while (num>=1){
fat=1;
for(int i=1;i<=num;i++)
  fat=fat*i;
printf("\n\tO fatorial é %d",fat);
printf("\nDigite um número:");
    scanf("%d",&num);
}
system("pause");
return 0;
}
