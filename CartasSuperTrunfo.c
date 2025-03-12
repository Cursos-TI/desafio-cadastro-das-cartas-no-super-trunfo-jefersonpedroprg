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
    float superPoder1;

    // Capturar os dados para a Carta 1
    printf("Insira as informações da Carta 1: \n");

    printf("Insira a letra do estado: ");
    scanf(" %c", &estado1);

    printf("Insira o código de estado: ");
    scanf("%s", codigoCarta1);

    printf("Insira o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Insira a população da cidade: ");
    scanf("%u", &populacao1);

    printf("Insira a área em KM da cidade: ");
    scanf("%f", &area1);

    printf("insira o PIB da cidade: ");
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
    float superPoder2;

    // Capturar os dados para a Carta 2

    printf("Insira as informações da Carta 2: \n");

    printf("Insira a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Insira o código de estado: ");
    scanf("%s", codigoCarta2);

    printf("Insira o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Insira a população da cidade: ");
    scanf("%u", &populacao2);

    printf("Insira a área em KM da cidade: ");
    scanf("%f", &area2);

    printf("insira o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Insira os pontos turisticos da cidade: ");
    scanf("%i", &pontosTuristicos2);

    // Imprimir os dados coletados das cartas

    // Dados da primeira carta
    printf("===Primeira carta=== \n");

    printf("Estado: %c \n", estado1);
    
    printf("Código do estado: %s \n", codigoCarta1);

    printf("Nome da cidade: %s \n", nomeCidade1);

    printf("População da cidade: %u \n", populacao1);

    printf("Área em KM da cidade: %f \n", area1);

    printf("PIB: %f \n", pib1);

    printf("Pontos turisticos: %i \n\n\n", pontosTuristicos1);

    // Dados da segunda carta
    printf("===Segunda carta=== \n");

    printf("Estado: %c \n", estado2);
    
    printf("Código do estado: %s \n", codigoCarta2);

    printf("Nome da cidade: %s \n", nomeCidade2);

    printf("População da cidade: %u \n", populacao2);

    printf("Área em KM da cidade: %f \n", area2);

    printf("PIB: %f \n", pib2);

    printf("Pontos turisticos: %i \n", pontosTuristicos2);

     // Calcular densidade demográfica
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Calcular o PIB per capita
    pibPercapita1 = pib1 / populacao1;
    pibPercapita2 = pib2 / populacao2;

    // Calcular a densidade invertida
    densidadeInvertida1 = 1 / densidade1;
    densidadeInvertida2 = 1 / densidede2;
    
    // Calcular o SuperPoder 
    float superPoder1 = ***SOMA DE TUDO****;
    float superPoder2 = ***SOMA DE TUDO****;
   
    //Fazer comparação de todas propriedades, como exemplo: resultado para população, área, pib, comparando uma com a outra


    //Imprimir o resultado, sendo a comparação da Carta 1 com a Carta 2
    printf("O resultado da comparação entre as cartas é %u.\n", resultado = carta1 > carta2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    return 0;
}
