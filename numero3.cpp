#include <stdio.h>
#include <stdlib.h>
#include <float.h>

// Estrutura para armazenar os dados de faturamento
typedef struct {
    int dia;
    double valor;
} Faturamento;

// Função para calcular estatísticas do faturamento
void calcularEstatisticas(Faturamento faturamentos[], int tamanho) {
    double menor = DBL_MAX, maior = -DBL_MAX, soma = 0.0;
    int diasValidos = 0, diasAcimaMedia = 0;

    // Calcula menor, maior e soma dos valores válidos
    for (int i = 0; i < tamanho; i++) {
        if (faturamentos[i].valor > 0) {
            if (faturamentos[i].valor < menor) menor = faturamentos[i].valor;
            if (faturamentos[i].valor > maior) maior = faturamentos[i].valor;
            soma += faturamentos[i].valor;
            diasValidos++;
        }
    }

    // Calcula a média
    double media = soma / diasValidos;

    // Conta os dias acima da média
    for (int i = 0; i < tamanho; i++) {
        if (faturamentos[i].valor > 0 && faturamentos[i].valor > media) {
            diasAcimaMedia++;
        }
    }

    // Exibe os resultados
    printf("Menor faturamento: R$%.2f\n", menor);
    printf("Maior faturamento: R$%.2f\n", maior);
    printf("Dias com faturamento acima da média: %d\n", diasAcimaMedia);
}

int main() {
    // Dados de faturamento diário (simulando JSON manualmente)
    Faturamento faturamentos[] = {
        {1, 22174.1664}, {2, 24537.6698}, {3, 26139.6134}, {4, 0.0},
        {5, 0.0}, {6, 26742.6612}, {7, 0.0}, {8, 42889.2258},
        {9, 46251.174}, {10, 11191.4722}, {11, 0.0}, {12, 0.0},
        {13, 3847.4823}, {14, 373.7838}, {15, 2659.7563}, {16, 48924.2448},
        {17, 18419.2614}, {18, 0.0}, {19, 0.0}, {20, 35240.1826},
        {21, 43829.1667}, {22, 18235.6852}, {23, 4355.0662}, {24, 13327.1025},
        {25, 0.0}, {26, 0.0}, {27, 25681.8318}, {28, 1718.1221},
        {29, 13220.495}, {30, 8414.61}
    };

    int tamanho = sizeof(faturamentos) / sizeof(faturamentos[0]);

    calcularEstatisticas(faturamentos, tamanho);

    return 0;
}
