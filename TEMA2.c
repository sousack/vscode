#include <stdio.h>

int main() {
    // Atributos das cartas já cadastrados (fixos para facilitar)
    int forca1 = 80, vel1 = 70, int1 = 60;   // Carta 1
    int forca2 = 75, vel2 = 85, int2 = 65;   // Carta 2

    int modo, opcao, opcao1, opcao2;
    int soma1, soma2;

    printf("=== SUPER TRUNFO DIGITAL ===\n");
    printf("Carta 1 -> Forca: %d | Velocidade: %d | Inteligencia: %d\n", forca1, vel1, int1);
    printf("Carta 2 -> Forca: %d | Velocidade: %d | Inteligencia: %d\n", forca2, vel2, int2);

    printf("\nEscolha o modo de jogo:\n");
    printf("1 - Comparacao simples (um atributo)\n");
    printf("2 - Comparacao multipla (menu interativo)\n");
    printf("3 - Comparacao de dois atributos (ternario)\n");
    printf("Opcao: ");
    scanf("%d", &modo);

    switch(modo) {
        case 1: // Comparação simples
            if (forca1 > forca2) {
                printf("Carta 1 venceu na Forca!\n");
            } else if (forca1 < forca2) {
                printf("Carta 2 venceu na Forca!\n");
            } else {
                printf("Empate na Forca!\n");
            }
            break;

        case 2: // Comparação múltipla
            printf("\nEscolha o atributo para comparar:\n");
            printf("1 - Forca\n");
            printf("2 - Velocidade\n");
            printf("3 - Inteligencia\n");
            printf("Opcao: ");
            scanf("%d", &opcao);

            switch(opcao) {
                case 1:
                    if (forca1 > forca2)
                        printf("Carta 1 venceu pela Forca!\n");
                    else if (forca1 < forca2)
                        printf("Carta 2 venceu pela Forca!\n");
                    else
                        printf("Empate!\n");
                    break;

                case 2:
                    if (vel1 > vel2)
                        printf("Carta 1 venceu pela Velocidade!\n");
                    else if (vel1 < vel2)
                        printf("Carta 2 venceu pela Velocidade!\n");
                    else
                        printf("Empate!\n");
                    break;

                case 3:
                    if (int1 > int2)
                        printf("Carta 1 venceu pela Inteligencia!\n");
                    else if (int1 < int2)
                        printf("Carta 2 venceu pela Inteligencia!\n");
                    else
                        printf("Empate!\n");
                    break;

                default:
                    printf("Opcao invalida!\n");
            }
            break;

        case 3: // Comparação de dois atributos (ternário)
            printf("\nEscolha o primeiro atributo (1-Forca, 2-Velocidade, 3-Inteligencia): ");
            scanf("%d", &opcao1);

            printf("Escolha o segundo atributo (1-Forca, 2-Velocidade, 3-Inteligencia): ");
            scanf("%d", &opcao2);

            soma1 = (opcao1 == 1 ? forca1 : (opcao1 == 2 ? vel1 : int1)) +
                    (opcao2 == 1 ? forca1 : (opcao2 == 2 ? vel1 : int1));

            soma2 = (opcao1 == 1 ? forca2 : (opcao1 == 2 ? vel2 : int2)) +
                    (opcao2 == 1 ? forca2 : (opcao2 == 2 ? vel2 : int2));

            printf("Resultado: %s\n",
                   (soma1 > soma2) ? "Carta 1 venceu!" :
                   (soma1 < soma2) ? "Carta 2 venceu!" : "Empate!");
            break;

        default:
            printf("Modo invalido!\n");
    }

    return 0;
}
