#include <stdio.h>
#include <stdlib.h>
int main() {
 int n;
 int r;
 
 printf("Digite o numero: ");
 scanf("%d", &n);
 
 // Verifica se é o número 1 e imprime ele mesmo
 if(n == 1) {
  printf("%d\n", n);
 }
 // Caso o número seja maior do que 1, realiza
    // divisões sucessivas por 2, imprimindo o seu
    // resto para construção da forma binária.
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
