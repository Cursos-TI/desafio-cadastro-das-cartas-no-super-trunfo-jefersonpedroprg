#include <stdio.h>

int main(){
    // Declaração de variáveis da Carta 1
    char estado1;
    char codigoCarta1[3];
    char nomeCidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPercapita1;
    float densidadeInvertida1;

    // Capturar os dados para a Carta 1
    printf("Insira as informações da Carta 1: \n");

    printf("Insira a letra do estado: ");
    scanf(" %c", &estado1);

    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta1);

    printf("Insira o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Insira a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Insira a área em KM da cidade: ");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Insira os pontos turisticos da cidade: ");
    scanf("%i", &pontosTuristicos1);

    // Declaração de variáveis da Carta 2
    char estado2;
    char codigoCarta2[3];
    char nomeCidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPercapita2;
    float densidadeInvertida2;

    // Capturar os dados para a Carta 2

    printf("Insira as informações da Carta 2: \n");

    printf("Insira a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Insira o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Insira a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Insira a área em KM da cidade: ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Insira os pontos turisticos da cidade: ");
    scanf("%i", &pontosTuristicos2);

    // Imprimir os dados coletados das cartas

    // Dados da primeira carta
    printf("\n\n===Primeira carta=== \n");

    printf("Estado: %c \n", estado1);

    printf("Código do estado: %s \n", codigoCarta1);

    printf("Nome da cidade: %s \n", nomeCidade1);

    printf("População da cidade: %lu \n", populacao1);

    printf("Área em KM da cidade: %.2f \n", area1);

    printf("PIB: %.2f \n", pib1);

    printf("Pontos turisticos: %i \n\n", pontosTuristicos1);

    // Dados da segunda carta
    printf("===Segunda carta=== \n");

    printf("Estado: %c \n", estado2);

    printf("Código do estado: %s \n", codigoCarta2);

    printf("Nome da cidade: %s \n", nomeCidade2);

    printf("População da cidade: %lu \n", populacao2);

    printf("Área em KM da cidade: %.2f \n", area2);

    printf("PIB: %.2f \n", pib2);

    printf("Pontos turisticos: %i \n", pontosTuristicos2);

    // Calcular densidade demográfica
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Calcular o PIB per capita
    pibPercapita1 = pib1 / populacao1;
    pibPercapita2 = pib2 / populacao2;

    // Calcular a densidade invertida
    densidadeInvertida1 = 1 / densidade1;
    densidadeInvertida2 = 1 / densidade2;

    // Calcular o SuperPoder 
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPercapita1 + densidadeInvertida1;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + densidadeInvertida2;

    //Imprimir o resultado, sendo a comparação da Carta 1 com a Carta 2
    printf("\n\n************\n\nOs resultados da comparação entre as cartas são: \n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidade1 > densidade2);
    printf("PIB per capita: %d\n", pibPercapita1 > pibPercapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
