#include <stdio.h>

#define TAM 8  // tamanho do tabuleiro 8x8

int main() {
    int tabuleiro[TAM][TAM] = {0}; // 0 = água, 1 = navio
    int linha, coluna;
    
    // Posicionando um navio como exemplo
    tabuleiro[3][3] = 1;

    // Posição do ataque
    int ataqueLinha = 3;
    int ataqueColuna = 3;

    printf("Tabuleiro antes do ataque:\n");
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Habilidade em cruz: afeta linha e coluna do ataque
    for(int i=0;i<TAM;i++){
        tabuleiro[ataqueLinha][i] = 2; // marca efeito na linha
        tabuleiro[i][ataqueColuna] = 2; // marca efeito na coluna
    }

    printf("\nTabuleiro apos ataque em cruz:\n");
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
