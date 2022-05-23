//exercicio55
#include<stdlib.h>
#include<locale.h>
#define taml 2
#define tamc 2
int main(){
int i,j,matA[taml][tamc],matB[taml][tamc];
printf("\nCarga da Matriz !\n");
for(i=0;i<taml;i++)
{
	for(j=0;j<tamc;j++)
	{
printf("\tElemento [%d][%d] de A= ",i,j);
scanf("%d",&matA[i][j]);
if(i==j)
matB[i][j]=3*matA[i][j];
else
matB[i][j]=2*matA[i][j];
	}
printf("\n\nExibe a matriz B !\n");
}
for(i=0;i<taml;i++)
{
for(j=0;j<tamc;j++)
{
printf("\t%d",matB[i][j]);
}
}
printf("\n\n");
system("pause");
return 0;
}

