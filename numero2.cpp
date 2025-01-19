#include <stdio.h>

int pertenceFibonacci(int num) {
    int t1 = 0, t2 = 1, proximoTermo;

    if (num == t1 || num == t2) {
        return 1; // O número pertence à sequência
    }

    while (1) {
        proximoTermo = t1 + t2;
        if (proximoTermo == num) {
            return 1; // O número pertence à sequência
        } else if (proximoTermo > num) {
            return 0; // O número não pertence à sequência
        }
        t1 = t2;
        t2 = proximoTermo;
    }
}

int main() {
    int numero;

    printf("Digite um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, insira um número não negativo.\n");
        return 1;
    }

    if (pertenceFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
