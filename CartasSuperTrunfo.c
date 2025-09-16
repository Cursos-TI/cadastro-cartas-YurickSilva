#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado01, nomecidade01[50], codcarta01[4];
  int  populacao01, npturisticos01;
  float area01, pib01;

  // As variáveis são divididas em duas "versões" uma para cada uma das cartas 
  // já que é necessário fazer apenas a entrada e exibição de duas

  char estado02, nomecidade02[50], codcarta02[4];
  int  populacao02, npturisticos02;
  float area02, pib02;

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
        scanf("%d", &populacao01);

    printf("Digite o total de pontos turisticos da cidade N1:");
        scanf("%d", &npturisticos01);

    printf("Digite a area em M² da cidade N1:");
        scanf("%f", &area01);

    printf("Digite o PIB em BI de R$ da cidade N1 :");
        scanf("%f", &pib01);

 // Área para entrada de dados da carta número 2

    printf("Digite o estado da carta N2(A - H):");
        scanf(" %c", &estado02);
    printf("Digite o codigo da carta N2(EX: A01):");
        scanf(" %s", codcarta02);

    printf("Digite o nome da cidade N2:");
        scanf(" %s", nomecidade02);

    printf("Digite a populacao da cidade N2:");
        scanf("%d", &populacao02);

    printf("Digite o total de pontos turisticos da cidade N2:");
        scanf("%d", &npturisticos02);

    printf("Digite a area em M² da cidade N2:");
        scanf("%f", &area02);

    printf("Digite o PIB em BI de R$ da cidade N2 :");
        scanf("%f", &pib02);

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
    printf("Populacao: %d\n", populacao01);
    printf("Pontos Turisticos: %d\n", npturisticos01);
    printf("Area em M²: %.2f\n", area01);
    printf("PIB em BI de R$: %.2f\n", pib01);

 //Área para exibição dos dados da carta N2
    printf("\n\nCarta N2\n");
    printf("Estado: %c\n", estado02);
    printf("Codigo da Carta: %s\n", codcarta02);
    printf("Nome da Cidade: %s\n", nomecidade02);
    printf("Populacao: %d\n", populacao02);
    printf("Pontos Turisticos: %d\n", npturisticos02);
    printf("Area em M²: %.2f\n", area02);
    printf("PIB em BI de R$: %.2f\n", pib02);

return 0;
} 
