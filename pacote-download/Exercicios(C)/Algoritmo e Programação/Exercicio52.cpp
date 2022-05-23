//exercicio52
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define taml 4
#define tamc 3
int main(){
int i,j,matA[taml][tamc],matB[taml][tamc],matC[taml][tamc];
printf("\nCarga da Matriz !\n");
for(i=0;i<taml;i++)
{
for(j=0;j<tamc;j++)
{
printf("\tElemento [%d][%d] de A = ",i,j);
scanf("%d",&matA[i][j]);
printf("\tElemento [%d][%d] de B = ",i,j);
scanf("%d",&matB[i][j]);
matC[i][j] = matA[i][j]+matB[i][j];
}
}
printf("\n\nExibe a matriz C !\n");
for(i=0;i<taml;i++){
for(j=0;j<tamc;j++)
{
printf("\t\n\t%d",matC[i][j]);
}
}
printf("\n\n");
system("pause");
return 0;
}

