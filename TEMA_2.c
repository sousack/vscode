#include <stdio.h>

int main() {
    // variáveis principais da carta
    char estado[30];
    char codigo[5];
    char cidade[50];
    int populacao;
    float pib;
    float area;
    int pontosTuristicos;

    // variáveis derivadas
    float densidade;
    float pibPerCapita;

    printf("=== Cadastro de Carta Super Trunfo ===\n");

    // entrada de dados
    printf("Digite o Estado: ");
    fgets(estado, sizeof(estado), stdin);

    printf("Digite o Codigo (ex: A01): ");
    fgets(codigo, sizeof(codigo), stdin);

    printf("Digite o Nome da Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    // cálculos derivados
    densidade = populacao / area;
    pibPerCapita = pib / populacao;

    // saída de dados formatada
    printf("\n=== Carta Cadastrada ===\n");
    printf("Estado: %s", estado);
    printf("Codigo: %s", codigo);
    printf("Cidade: %s", cidade);
    printf("Populacao: %d\n", populacao);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Area: %.2f km2\n", area);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade);
    printf("PIB per Capita: %.6f\n", pibPerCapita);

    return 0;
}
