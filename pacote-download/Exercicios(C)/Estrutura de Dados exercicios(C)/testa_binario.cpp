#include <stdio.h>
#include <stdlib.h>
int main() {
 int n;
 int r;
 
 printf("Digite o numero: ");
 scanf("%d", &n);
 
 // Verifica se � o n�mero 1 e imprime ele mesmo
 if(n == 1) {
  printf("%d\n", n);
 }
 // Caso o n�mero seja maior do que 1, realiza
    // divis�es sucessivas por 2, imprimindo o seu
    // resto para constru��o da forma bin�ria.
 else {
        printf("Forma binaria: ");
  do {
   r = n % 2;
   printf("%d", r);
   n = n / 2;
  } while(n >= 1);
  printf("\n");
 }
 system("pause");
}
