//exercicio53
#include<stdlib.h>
#include<locale.h>
#define taml 2
#define tamc 2
int main(){
int i,j,mat[taml][tamc],contpar=0;
printf("\nCarga da Matriz !\n");
	for(i=0;i<taml;i++)
	{
	for(j=0;j<tamc;j++)
	{
	printf("\tElemento [%d][%d]= ",i,j);
	scanf("%d",&mat[i][j]);
	if(mat[i][j]%2==0)
	contpar++;
	}
	}
	printf("\n\nExistem %d numeros pares !\n",contpar);
	printf("\n\n");
	system("pause");
	return 0;
}

