#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1, codigo1[5], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Declaração das variáveis para a segunda carta
    char estado2, codigo2[5], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // Leitura dos dados da primeira carta
    printf("Informe os dados da carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    getchar();  // Limpa o buffer

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar();  // Limpa o buffer
    fgets(cidade1, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para a primeira carta
    densidade1 = populacao1 / area1;  // Densidade populacional
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB per capita

    // Leitura dos dados da segunda carta
    printf("\nInforme os dados da carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    getchar();  // Limpa o buffer

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar();  // Limpa o buffer
    fgets(cidade2, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a segunda carta
    densidade2 = populacao2 / area2;  // Densidade populacional
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB per capita

    // Menu de seleção do atributo para comparação
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:  // Comparação de População
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %d\n", cidade1, populacao1);
            printf("Carta 2 - %s: %d\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
            }
            break;

        case 2:  // Comparação de Área
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate! Ambas as cidades têm a mesma área.\n");
            }
            break;

        case 3:  // Comparação de PIB
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate! Ambos os PIBs são iguais.\n");
            }
            break;

        case 4:  // Comparação de Pontos Turísticos
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate! Ambas as cidades têm o mesmo número de pontos turísticos.\n");
            }
            break;

        case 5:  // Comparação de Densidade Demográfica
            printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate! Ambas as cidades têm a mesma densidade demográfica.\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
            break;
    }

    return 0;
}
