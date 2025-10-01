#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado01, nomecidade01[50], codcarta01[4];
  unsigned long int populacao01, npturisticos01;
  float area01, pib01, densidadepopulacional01, pibpercapita01, superpoder01;

  // As variáveis são divididas em duas "versões" uma para cada uma das cartas 
  // já que é necessário fazer apenas a entrada e exibição de duas

  char estado02, nomecidade02[50], codcarta02[4];
  int  populacao02, npturisticos02;
  float area02, pib02, densidadepopulacional02, pibpercapita02, superpoder02;

  // Área para entrada de dados da carta número 1
  /*
    Nessa área são feitas as entradas dos dados usando os dois 
    diferentes tipos de váriaveis que fiz para as duas cartas.
  */
    printf("Digite o estado da carta N1(A - H):");
        scanf(" %c", &estado01);
    printf("Digite o codigo da carta N1(EX: A01):");
        scanf(" %s", codcarta01);
    printf("Digite o nome da cidade N1:");
        scanf(" %s", nomecidade01);
    printf("Digite a populacao da cidade N1:");
        scanf("%lu", &populacao01);
    printf("Digite o total de pontos turisticos da cidade N1:");
        scanf("%d", &npturisticos01);
    printf("Digite a area em KM² da cidade N1:");
        scanf("%f", &area01);
    printf("Digite o PIB em R$ da cidade N1 :");
        scanf("%f", &pib01);
    // Cálculo da densidade populacional e do PIB per capita para a primeira carta
    densidadepopulacional01 = (float)populacao01 / area01;
    pibpercapita01 = pib01 / (float)populacao01;

 // Área para entrada de dados da carta número 2

    printf("Digite o estado da carta N2(A - H):");
        scanf(" %c", &estado02);
    printf("Digite o codigo da carta N2(EX: A01):");
        scanf(" %s", codcarta02);
    printf("Digite o nome da cidade N2:");
        scanf(" %s", nomecidade02);
    printf("Digite a populacao da cidade N2:");
        scanf("%lu", &populacao02);
    printf("Digite o total de pontos turisticos da cidade N2:");
        scanf("%d", &npturisticos02);
    printf("Digite a area em KM² da cidade N2:");
        scanf("%f", &area02);
    printf("Digite o PIB em R$ da cidade N2 :");
        scanf("%f", &pib02);

    // Cálculo da densidade populacional e do PIB per capita para a segunda carta
    densidadepopulacional02 = (float)populacao02 / area02; // Cálculo da densidade populacional
    pibpercapita02 = pib02 / (float)populacao02; // Cálculo do PIB per capita

    // Cálculo do superpoder para ambas as cartas
    superpoder01 = (float)populacao01 + area01 + pib01 + (float)npturisticos01 + pibpercapita01 + (1.0f / densidadepopulacional01);
    superpoder02 = (float)populacao02 + area02 + pib02 + (float)npturisticos02 + pibpercapita02 + (1.0f / densidadepopulacional02);

  // Área para exibição dos dados da carta N1
  /*
  Nessa área são mostradas individualmente e em forma de lista as informações 
  cadastradas anteriormente das cartas cadastradas em variáveis deiferentes, 
  devido a terem sido feitas em variaveis diferentes foi possivel
  fazer sem loops ou modelos lógicos
  o cadastro e a exibição de duas cartas diferentes.
  */
    printf("\n\nCarta N1\n");
    printf("Estado: %c\n", estado01);
    printf("Codigo da Carta: %s\n", codcarta01);
    printf("Nome da Cidade: %s\n", nomecidade01);
    printf("Populacao: %lu\n", populacao01);
    printf("Pontos Turisticos: %d\n", npturisticos01);
    printf("Area em KM²: %.2f\n", area01);
    printf("PIB em reais: R$%.2f\n", pib01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional01);
    printf("PIB per Capita: R$%.2f\n", pibpercapita01);
    printf("O Super Poder é: %.2f\n", superpoder01);

 //Área para exibição dos dados da carta N2
    printf("\n\nCarta N2\n");
    printf("Estado: %c\n", estado02);
    printf("Codigo da Carta: %s\n", codcarta02);
    printf("Nome da Cidade: %s\n", nomecidade02);
    printf("Populacao: %lu\n", populacao02);
    printf("Pontos Turisticos: %d\n", npturisticos02);
    printf("Area em KM²: %.2f\n", area02);
    printf("PIB em reais: R$%.2f\n", pib02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional02);
    printf("PIB per Capita: R$%.2f\n", pibpercapita02);
    printf("O Super Poder é: %.2f\n", superpoder02);

// Área de Comparação de Cartas (usando apenas operadores lógicos)
printf("\nComparação de Cartas:\n");

// População: Maior vence
printf("Populacao: Carta %s venceu (%d)\n", 
       ((populacao01 > populacao02) ? "1" : "2"), 
       (populacao01 > populacao02));

// Área: Maior vence
printf("Área: Carta %s venceu (%d)\n", 
       ((area01 > area02) ? "1" : "2"), 
       (area01 > area02));

// PIB: Maior vence
printf("PIB: Carta %s venceu (%d)\n", 
       ((pib01 > pib02) ? "1" : "2"), 
       (pib01 > pib02));

// Pontos Turísticos: Maior vence
printf("Pontos Turísticos: Carta %s venceu (%d)\n", 
       ((npturisticos01 > npturisticos02) ? "1" : "2"), 
       (npturisticos01 > npturisticos02));

// Densidade Populacional: Menor vence (inverso!)
printf("Densidade Populacional: Carta %s venceu (%d)\n", 
       ((densidadepopulacional01 < densidadepopulacional02) ? "1" : "2"), 
       (densidadepopulacional01 < densidadepopulacional02));

// PIB per Capita: Maior vence
printf("PIB per Capita: Carta %s venceu (%d)\n", 
       ((pibpercapita01 > pibpercapita02) ? "1" : "2"), 
       (pibpercapita01 > pibpercapita02));

// Super Poder: Maior vence
printf("Super Poder: Carta %s venceu (%d)\n", 
       ((superpoder01 > superpoder02) ? "1" : "2"), 
       (superpoder01 > superpoder02));

    return 0;
} 
