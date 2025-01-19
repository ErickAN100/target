#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;

    // Inverte a string trocando os caracteres de início com os do fim
    while (inicio < fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char str[100];

    // Entrada da string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha (\n) adicionado pelo fgets
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Inverte a string
    inverterString(str);

    // Exibe a string invertida
    printf("String invertida: %s\n", str);

    return 0;
}
