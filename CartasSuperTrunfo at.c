
#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[5];
    char nomeCidade1[15];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    double densidadePopulacional1;   
    float pibPerCapita1;
    float superPoder1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[5];
    char nomeCidade2[15];
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    double densidadePopulacional2;  
    float pibPerCapita2;
    float superPoder2;

    // Entrada de dados para a primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): \n");
    scanf("%4s", codigo1);  // Limita a 4 caracteres + 1 para o terminador nulo

    printf("Nome da Cidade: \n");
    scanf("%14s", nomeCidade1);  // Limita a 14 caracteres + 1 para o terminador nulo

    printf("População: \n");
    scanf("%lu", &populacao1); // Alterado para %lu

    printf("Área (em km²): \n");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
 
    printf("Código da Carta (ex: B02): \n");
    scanf("%4s", codigo2);  // Limita a 4 caracteres + 1 para o terminador nulo
 
    printf("Nome da Cidade: \n");
    scanf("%14s", nomeCidade2);  // Limita a 14 caracteres + 1 para o terminador nulo
 
    printf("População: \n");
    scanf("%lu", &populacao2); // Alterado para %lu
 
    printf("Área (em km²): \n");
    scanf("%f", &area2);
 
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
 
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Calculando a densidade populacional
    densidadePopulacional1 = (double)populacao1 / area1; 
    densidadePopulacional2 = (double)populacao2 / area2; 

    // Calculando PIB per Capita
    pibPerCapita1 = pib1 * 1e9 / populacao1; // PIB em reais dividido pela população
    pibPerCapita2 = pib2 * 1e9 / populacao2; // PIB em reais dividido pela população

    // Calculando o Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("A densidade populacional é: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("A densidade populacional é: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 > densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}