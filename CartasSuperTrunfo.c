#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Objetivo: Cadastrar duas cartas, calcular densidade e PIB per capita, comparar um atributo (PIB) com if-else

int main() {
    // Declaração das variáveis para as duas cartas
    char estado01, nomecidade01[50], codcarta01[4];
    unsigned long int populacao01, npturisticos01;
    float area01, pib01, densidadepopulacional01, pibpercapita01;

    char estado02, nomecidade02[50], codcarta02[4];
    unsigned long int populacao02, npturisticos02; // Corrigido para unsigned long int
    float area02, pib02, densidadepopulacional02, pibpercapita02;

    // Atribuição dos dados da Carta 1: São Paulo
    estado01 = 'A';
    strcpy(codcarta01, "A01");
    strcpy(nomecidade01, "Sao_Paulo");
    populacao01 = 12300000UL;
    npturisticos01 = 50;
    area01 = 1521.11f;
    pib01 = 700000000000.0f;

    // Atribuição dos dados da Carta 2: Rio de Janeiro
    estado02 = 'B';
    strcpy(codcarta02, "B01");
    strcpy(nomecidade02, "Rio_de_Janeiro");
    populacao02 = 6000000UL;
    npturisticos02 = 40;
    area02 = 1182.3f;
    pib02 = 300000000000.0f;

    // Cálculo da densidade populacional e PIB per capita (com verificação de divisão por zero)
    // Carta 1
    if (area01 != 0) {
        densidadepopulacional01 = (float)populacao01 / area01;
    } else {
        densidadepopulacional01 = 0.0f; // Evita divisão por zero
    }
    if (populacao01 != 0) {
        pibpercapita01 = pib01 / (float)populacao01;
    } else {
        pibpercapita01 = 0.0f; // Evita divisão por zero
    }

    // Carta 2
    if (area02 != 0) {
        densidadepopulacional02 = (float)populacao02 / area02;
    } else {
        densidadepopulacional02 = 0.0f; // Evita divisão por zero
    }
    if (populacao02 != 0) {
        pibpercapita02 = pib02 / (float)populacao02;
    } else {
        pibpercapita02 = 0.0f; // Evita divisão por zero
    }

    // Exibição dos dados da Carta 1
    printf("\n\nCarta N1\n");
    printf("Estado: %c\n", estado01);
    printf("Codigo da Carta: %s\n", codcarta01);
    printf("Nome da Cidade: %s\n", nomecidade01);
    printf("Populacao: %lu\n", populacao01);
    printf("Pontos Turisticos: %lu\n", npturisticos01); // Corrigido para %lu
    printf("Area em KM²: %.2f\n", area01);
    printf("PIB em reais: R$%.2f\n", pib01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional01);
    printf("PIB per Capita: R$%.2f\n", pibpercapita01);

    // Exibição dos dados da Carta 2
    printf("\n\nCarta N2\n");
    printf("Estado: %c\n", estado02);
    printf("Codigo da Carta: %s\n", codcarta02);
    printf("Nome da Cidade: %s\n", nomecidade02);
    printf("Populacao: %lu\n", populacao02); // Corrigido para %lu
    printf("Pontos Turisticos: %lu\n", npturisticos02); // Corrigido para %lu
    printf("Area em KM²: %.2f\n", area02);
    printf("PIB em reais: R$%.2f\n", pib02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional02);
    printf("PIB per Capita: R$%.2f\n", pibpercapita02);

    // Comparação de um único atributo (PIB, maior vence)
    printf("\nComparação de cartas (Atributo: PIB):\n\n");
    printf("Carta 1 - %s (%c): %.2f\n", nomecidade01, estado01, pib01);
    printf("Carta 2 - %s (%c): %.2f\n", nomecidade02, estado02, pib02);
    if (pib01 > pib02) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomecidade01);
    } else if (pib01 < pib02) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomecidade02);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
