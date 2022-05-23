#include <stdio.h>
#include <conio.h>
int main(){
	struct ficha_de_professor{
		char nome[50];
		char disciplina[50];
		int idade;
	};
	struct ficha_de_professor professor;
	int i;
	for(i=0;i<5;i++){
  printf("\n---------- Cadastro de professor -----------\n\n\n");
   
  printf("Nome do professor ......: ");
  fflush(stdin);
  fgets(professor.nome,50,stdin);
  printf("Nome da disciplina ......: ");
  fflush(stdin);
  fgets(professor.disciplina,50,stdin);
  printf("Idade do professor......: ");
  scanf("%d",&professor.idade);
  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
  printf("Nome ...........: %s", professor.nome);
  printf("Disciplina .....: %s", professor.disciplina);
  printf("idade .....: %d", professor.idade);
}
  getch();
  return 0;

}
