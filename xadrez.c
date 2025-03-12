#include <stdio.h>

int main() {
    //  Movimentação das Peças
    const int MOV_BISPO = 7; // Movimento máximo do bispo (diagonal)
    const int MOV_TORRE = 7; // Movimento máximo da torre (reto)
    const int MOV_RAINHA = 7; // Movimento máximo da rainha (qualquer direção)

    // Implementação de Movimentação do Bispo
    printf("Movimentacao do Bispo:\n");
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Diagonal: %d casas\n", i);
    }

    // Implementação de Movimentação da Torre
    printf("\nMovimentacao da Torre:\n");
    for (int i = 1; i <= MOV_TORRE; i++) {
        printf("Direita: %d casas\n", i);
    }

    // Implementação de Movimentação da Rainha
    printf("\nMovimentacao da Rainha:\n");
    for (int i = 1; i <= MOV_RAINHA; i++) {
        printf("Esquerda: %d casas\n", i);
    }

    return 0;
}