#include <stdio.h>

int main() {
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Cadastro da carta 1
    printf("Cadastro da Carta 1\n");
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome: "); scanf("%s", nome1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (milhões): "); scanf("%f", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &pontosTuristicos1);

    // Cadastro da carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome: "); scanf("%s", nome2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (milhões): "); scanf("%f", &pib2);
    printf("Pontos turísticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculo dos novos atributos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Super Poder: soma de todos os atributos, invertendo densidade (1/densidade)
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1/densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/densidade2);

    // Exibição dos dados das cartas e atributos calculados
    printf("\n--- Cartas cadastradas ---\n");
    printf("Carta 1\nCódigo: %s\nNome: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.6f\nSuper Poder: %.2f\n",
           codigo1, nome1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1, superPoder1);
    printf("Carta 2\nCódigo: %s\nNome: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.6f\nSuper Poder: %.2f\n",
           codigo2, nome2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2, superPoder2);

    // Comparação atributo a atributo
    printf("\nComparação de atributos (1 = Carta 1 vence, 0 = Carta 2 vence):\n");

    printf("População: %d\n", (populacao1 > populacao2) ? 1 : 0);
    printf("Área: %d\n", (area1 > area2) ? 1 : 0);
    printf("PIB: %d\n", (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: %d\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);
    printf("Densidade Populacional: %d\n", (densidade1 < densidade2) ? 1 : 0); // menor vence
    printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    printf("Super Poder: %d\n", (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}