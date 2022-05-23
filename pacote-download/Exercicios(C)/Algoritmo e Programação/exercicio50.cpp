//exercicio50
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[12],i,contpar=0,contimpar=0;
printf("\nCarga do Vetor A!: \n");
for(i=0;i<12;i++){
printf("Entre com o elemento %d: ",i+1);
scanf("%d",&a[i]);
if(a[i]%2==0){
contpar++;
}
else{
contimpar++;
}
}
    printf("\nExibe o vetor A!: ");
for(i=0;i<12;i++)
printf("\n%d",a[i]);
printf("\nQuantidade de numeros pares = %d\n", contpar);
printf("\nQuantidade de numeros impares = %d \n\n", contimpar);
system("pause");
return 0;
}

