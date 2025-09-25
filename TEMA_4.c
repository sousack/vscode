#include <stdio.h>

int main() {
    int tabuleiro[8][8]; // 8x8 tabuleiro
    int linhaC, colunaC;

    printf("=== Movimentos do Cavalo ===\n");

    // Posição inicial do Cavalo
    linhaC = 4;  // linha de 1 a 8
    colunaC = 4; // coluna de 1 a 8

    printf("Cavalo esta na posicao: (%d, %d)\n", linhaC, colunaC);
    printf("Posicoes que o Cavalo pode se mover:\n");

    // Possíveis deslocamentos do Cavalo
    int movimentos[8][2] = {
        {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
        {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
    };

    // Loop aninhado para calcular novas posições
    for(int i = 0; i < 8; i++) {
        int novaLinha = linhaC + movimentos[i][0];
        int novaColuna = colunaC + movimentos[i][1];

        // Verifica se a nova posição está dentro do tabuleiro
        if(novaLinha >= 1 && novaLinha <= 8 && novaColuna >= 1 && novaColuna <= 8) {
            printf("(%d, %d)\n", novaLinha, novaColuna);
        }
    }

    return 0;
}
