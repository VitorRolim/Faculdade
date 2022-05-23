#include <stdio.h>
#include <stdlib.h>
  
// Fun��o Main
int main() {
 int n; // N�mero de entrada
 int r; // Resultado do deslocamento
 int i; // Contador
  
 // L� o n�mero
 printf("Digite o numero: ");
 scanf("%d", &n);
  
 // Utiliza um n�mero de 32 bits como base para a convers�o.
 for(i = 8; i >= 0; i--) {
    // Executa a opera��o shift right at� a 
    // �ltima posi��o da direita para cada bit.
    r = n >> i;
         
    // Por meio do "e" l�gico ele compara se o valor 
    // na posi��o mais � direita � 1 ou 0 
    // e imprime na tela at� reproduzir o n�mero bin�rio.
    if(r & 1) {
        printf("1");
    } else {
        printf("0");
    }
 }
  
 printf("\n");
  
 system("pause");
}
