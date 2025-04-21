#include <stdio.h>

int main() {
  
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[5];
    char nomeCidade1[15];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    double densidadePopulacional1;   

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[5];
    char nomeCidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    double densidadePopulacional2
    ;  
    // Entrada de dados para a primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
   
    printf("Código da Carta (ex: A01): \n");
    scanf("%4s", codigo1);  // Limita a 4 caracteres + 1 para o terminador nulo
   
    printf("Nome da Cidade: \n");
    scanf("%14s", nomeCidade1);  // Limita a 14 caracteres + 1 para o terminador nulo
   
    printf("População: \n");
    scanf("%d", &populacao1);
   
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
    scanf("%d", &populacao2);
     
    printf("Área (em km²): \n");
    scanf("%f", &area2);
     
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
     
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    
    // Calculando a densidade populacional
    densidadePopulacional1 = (double)populacao1 / area1; 

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("A densidade populacional é: %.2f\n", densidadePopulacional1);

    // Calculando a densidade populacional
    densidadePopulacional2 = (double)populacao2 / area2; 
    
    // Exibição dos dados da primeira carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("A densidade populacional é: %.2f\n", densidadePopulacional2);
    
    return 0;
    }