#include <stdio.h>

int main() {
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro da carta 1
    printf("Cadastro da Carta 1\n");
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome: "); scanf("%s", nome1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (milhões): "); scanf("%f", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &pontosTuristicos1);

    // Cadastro da carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome: "); scanf("%s", nome2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (milhões): "); scanf("%f", &pib2);
    printf("Pontos turísticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculo dos novos atributos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos dados das cartas
    printf("\n--- Cartas cadastradas ---\n");
    printf("Carta 1\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.6f\n",
           codigo1, nome1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1);
    printf("Carta 2\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.6f\n",
           codigo2, nome2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2);

    return 0;
}