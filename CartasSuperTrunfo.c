#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {

  // === Declarando as variáveis para o jogo ===

  // Código do Estado Carta 1 e Carta 2, respectivamente.
  char estado_carta1, estado_carta2;

  // Código da Carta 1 e Carta 2, respectivamente.
  char codigo_da_carta1[10], codigo_da_carta2[10];

  // Nome da cidade da Carta 1 e Carta 2, respectivamente.
  char nome_da_cidade_carta1[20], nome_da_cidade_carta2[20];

  // Número de habitantes da cidade da Carta 1 e Carta 2, respectivamente.
  int populacao_carta1, populacao_carta2;

  // Área da cidade em km² da cidade da Carta 1 e Carta 2, respectivamente.
  float area_em_km2_carta1, area_em_km2_carta2;

  // PIB da cidade da Carta 1 e Carta 2, respectivamente.
  float pib_carta1, pib_carta2;

  // Número de pontos turísticos que a cidade da Carta 1 e Carta 2 possuem, respectivamente.
  int numero_pontos_turisticos_carta1, numero_pontos_turisticos_carta2;

  // Densidade populacional da Carta 1 e Carta 2, respectivamente.
  float densidade_populacional_carta1, densidade_populacional_carta2;

  // PIP per capito da Carta 1 e Carta 2, respectivamente.
  float pib_per_capita_carta1, pib_per_capita_carta2;


  printf("=== Desafio Super Trunfo - Países=== \n");

  // === Entrada de dados da Carta 1:
  printf("\n=== Cadastro da Carta 1 === \n");

    
  printf("Digite uma letra de 'A' a 'H' para representar o nome do Estado da Carta: ");
  scanf(" %c", &estado_carta1); // Inserindo valor a variável referente ao Estado da Carta 1

  printf("Digite o Código da carta, ele deve começar com a letra escolhida para o estado (ex: A01): ");
  scanf("%s", codigo_da_carta1); //Inserindo valor à variável referente ao Código da Carta 1

  printf("Digite o nome da Cidade: ");
  scanf("%s", nome_da_cidade_carta1); //Inserindo valor à variável referente ao Nome da cidade da Carta 1

  printf("Digite qual a populacao da cidade: ");
  scanf("%d", &populacao_carta1); // Inserindo valor à variável referente a População da Carta 1

  printf("Digite a Área da cidade (em km²): ");
  scanf("%f", &area_em_km2_carta1); // Inserindo valor à variável referente a Área da Carta 1

  printf("Digite o PIB  (em bilhões de Reais): ");
  scanf("%f", &pib_carta1); // Inserindo valor à variável referente ao PIP da Carta 1
  pib_carta1 *= 1000000000.0; // Converte para possibilitar o cálculo para PIB per Capita

  printf("Digite o número de pontos turísticos que a Cidade possui: ");
  scanf("%d", &numero_pontos_turisticos_carta1); // Inserindo valor à variável referente ao Número de pontos turísticos da Carta 1

  
  // === Entrada de dados da Carta 2:
  printf("\n === Cadastro da Carta 2 === \n");

  printf("Digite uma letra de 'A' a 'H' para representar o nome do Estado da Carta: ");
  scanf(" %c", &estado_carta2); // Inserindo valor a variável referente ao Estado da Carta 2

  printf("Digite o Código da carta, ele deve começar com a letra escolhida para o estado (ex: B01): ");
  scanf("%s", codigo_da_carta2); //Inserindo valor à variável referente ao Código da Carta 2

  printf("Digite o nome da Cidade: ");
  scanf("%s", nome_da_cidade_carta2); //Inserindo valor à variável referente ao Nome da cidade da Carta 2

  printf("Digite qual a população da cidade: ");
  scanf("%d", &populacao_carta2); // Inserindo valor à variável referente a População da Carta 2

  printf("Digite a Área da cidade (em km²): ");
  scanf("%f", &area_em_km2_carta2); // Inserindo valor à variável referente a Área da Carta 2

  printf("Digite o PIB  (em bilhões de Reais): ");
  scanf("%f", &pib_carta2); // Inserindo valor à variável referente ao PIP da Carta 2
  pib_carta2 *= 1000000000.0; // Converte para possibilitar o cálculo para PIB per Capita

  printf("Digite o número de pontos turísticos que a Cidade possui: ");
  scanf("%d", &numero_pontos_turisticos_carta2); // Inserindo valor à variável referente ao Número de pontos turísticos da Carta 2


  // Cálculo da densidade populacional da Carta 1
  densidade_populacional_carta1 = (float) populacao_carta1 / area_em_km2_carta1;

  // Cálculo do Pip per Capita da Carta 1
  pib_per_capita_carta1 =  pib_carta1 / (float) populacao_carta1;
  
  
  // Cálculo da densidade populacional da Carta 2
  densidade_populacional_carta2 = (float) populacao_carta2 / area_em_km2_carta2;

  // Cálculo do Pip per Capita da Carta 2
  pib_per_capita_carta2 =  pib_carta2 / (float) populacao_carta2;
  
  
  // === Impressão dos dados da carta 1 ===
  printf("\n Carta 1: \n");

  printf("Estado: %c \n", estado_carta1); //Estado
  printf("Código: %s \n", codigo_da_carta1); //Código
  printf("Nome da Cidade: %s \n", nome_da_cidade_carta1); //Nome
  printf("População: %d habitantes \n", populacao_carta1); //Populção
  printf("Área: %.2f km² \n", area_em_km2_carta1); //Área
  printf("PIB: %.2f bilhões de reais \n", pib_carta1 / 1000000000.0); // PIB - Conversão necessária para voltar ao formato originalmente inserido
  printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_carta1); //Número de Pontos turísticos
  printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional_carta1); // Densidade Populacional
  printf("PIB per Capita: %.2f reais \n", pib_per_capita_carta1); // PIB per Capita

   // === Impressão dos dados da carta 2 ===
  printf("\n Carta 2: \n");

  printf("Estado: %c \n", estado_carta2); //Estado
  printf("Código: %s \n", codigo_da_carta2); //Código
  printf("Nome da Cidade: %s \n", nome_da_cidade_carta2); //Nome
  printf("População: %d habitantes \n", populacao_carta2); //Populção
  printf("Área: %.2f km² \n", area_em_km2_carta2); //Área
  printf("PIB: %.2f bilhões de reais \n", pib_carta2 / 1000000000.0); // PIB - Conversão necessária para voltar ao formato originalmente inserido
  printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_carta2); //Número de Pontos turísticos
  printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional_carta2); // Densidade Populacional
  printf("PIB per Capita: %.2f reais \n", pib_per_capita_carta2); // PIB per Capita






  return 0;
}
