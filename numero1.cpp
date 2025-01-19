#include <stdio.h>

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    // Laço enquanto (while)
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    // Imprime o valor final de SOMA
    printf("O valor de SOMA é: %d\n", SOMA);

    return 0;
}
