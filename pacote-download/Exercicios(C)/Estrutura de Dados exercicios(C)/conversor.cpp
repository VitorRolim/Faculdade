#include <stdio.h>
#include <stdlib.h>


int main() {

    int num, bin[10], aux, aux2;
    
    printf("Digite o número decimal que vai ser convertido: ");
    scanf("%d", &num);

    for (aux = 9; aux >= 0; aux--) {
        if (num % 2 == 0) {
            bin[aux] = 0;
            num = num / 2;
        }
        else {
            bin[aux] = 1;
            num = num / 2;
        }
    }

    for (aux = 0; aux <= 9; aux++) {
        printf("%d", bin[aux]);
    }

    return 0;
}
