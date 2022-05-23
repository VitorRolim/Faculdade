//exercicio54
#include<stdlib.h>
#include<locale.h>
#define taml 2
#define tamc 2
int main(){
int i,j,mat[taml][tamc],soma=0;
printf("\nCarga da Matriz !\n");
for(i=0;i<taml;i++)
{
for(j=0;j<tamc;j++)
{
printf("\tElemento [%d][%d]= ",i,j);
scanf("%d",&mat[i][j]);
if((mat[i][j]%2==0) && (i==j))
soma+=mat[i][j];
}
}
printf("\n\nA soma dos elementos pares é %d !\n",soma);
printf("\n\n");
system("pause");
return 0;
}

