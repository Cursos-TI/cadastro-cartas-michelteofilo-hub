#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
// Área para definição das variáveis para armazenar as propriedades das cidades

    //Declaração de variáveis, Carta 1

    char estado1;
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int PontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;
    

    //Declaração de variáveis, Carta 2

    char estado2;
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int PontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;


// Área para entrada de dados

    //Entrada de dados - Carta 1

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (uma letra): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area em km2: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turistico: ");
    scanf("%d", &PontosTuristicos1);

    //Cálculos
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    superPoder1 = (float)populacao1 + area1 + pib1 + PontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);


    //Entrada de dados - Carta 2

    printf("== Cadastro da Carta 2 ==\n");

    printf("Estado (uma letra): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area em Km2: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos2);

    //Cálculos
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + PontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);


// Área para exibição dos dados da cidade

    //EXIBICAO DAS CARTAS

    printf("\n== CARTA 1 ==\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);


    printf("\n== CARTA 2 ==\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    //Comparação das Cartas

    printf("\n== Comparação das Cartas ==\n");

    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1 > PontosTuristicos2);

    // Densidade : menor vence

    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);


    return 0;
} 
