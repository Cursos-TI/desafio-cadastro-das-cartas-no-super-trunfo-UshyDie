#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {

  // === Declarando as variáveis para o jogo ===

  // Código do Estado A e B
  char estado_carta1, estado_carta2;
  // Código da carta A e B
  char codigo_da_carta1[10], codigo_da_carta2[10];
  // Nome da cidade A e B
  char nome_da_cidade_carta1[20], nome_da_cidade_carta2[20];
  // Número de habitantes da cidade A e B
  int populacao_carta1, populacao_carta2;
  // Área da cidade em km² da cidade A e B
  float area_em_km2_carta1, area_em_km2_carta2;
  // PIB da cidade A e B
  float pib_carta1, pib_carta2;
  // Número de pontos turísticos que a cidade A e B possuem
  int numero_pontos_turisticos_carta1, numero_pontos_turisticos_carta2;


  printf("Desafio Super Trunfo - Países \n");

  // === Entrada de dados da Carta 1:
  printf("=== Cadastro da Carta 1 === \n");

    
  printf("Digite uma letra de 'A' a 'H' para representar o nome do Estado da Carta: ");
  scanf(" %c", &estado_carta1);

  printf("Digite o Código da carta, ele deve começar com a letra escolhida para o estado (ex: A01): ");
  scanf("%s", codigo_da_carta1);

  printf("Digite o nome da Cidade: ");
  scanf("%s", nome_da_cidade_carta1);

  printf("Digite qual a populacao da cidade: ");
  scanf("%d", &populacao_carta1);

  printf("Digite a Área da cidade (em km²): ");
  scanf("%f", &area_em_km2_carta1);

  printf("Digite o PIB  (em bilhões de Reais): ");
  scanf("%f", &pib_carta1);

  printf("Digite o número de pontos turísticos que a Cidade possui: ");
  scanf("%d", &numero_pontos_turisticos_carta1);


  // === Entrada de dados da Carta 2:
  printf("\n === Cadastro da Carta 2 === \n");

  printf("Digite uma letra de 'A' a 'H' para representar o nome do Estado da Carta: ");
  scanf(" %c", &estado_carta2);

  printf("Digite o Código da carta, ele deve começar com a letra escolhida para o estado (ex: B01): ");
  scanf("%s", codigo_da_carta2);

  printf("Digite o nome da Cidade: ");
  scanf("%s", nome_da_cidade_carta2);

  printf("Digite qual a população da cidade: ");
  scanf("%d", &populacao_carta2);

  printf("Digite a Área da cidade (em km²): ");
  scanf("%f", &area_em_km2_carta2);

  printf("Digite o PIB  (em bilhões de Reais): ");
  scanf("%f", &pib_carta2);

  printf("Digite o número de pontos turísticos que a Cidade possui: ");
  scanf("%d", &numero_pontos_turisticos_carta2);


  // === Impressão dos dados da carta 1 ===
  printf("\n Carta 1: \n");
  printf("Estado: %c \n", estado_carta1);
  printf("Código: %s \n", codigo_da_carta1);
  printf("Nome da Cidade: %s \n", nome_da_cidade_carta1);
  printf("População: %d habitantes \n", populacao_carta1);
  printf("Área: %.2f km² \n", area_em_km2_carta1);
  printf("PIB: %.2f bilhões de reais \n", pib_carta1);
  printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_carta1);

   // === Impressão dos dados da carta 2 ===
  printf("\n Carta 2: \n");
  printf("Estado: %c \n", estado_carta2);
  printf("Código: %s \n", codigo_da_carta2);
  printf("Nome da Cidade: %s \n", nome_da_cidade_carta2);
  printf("População: %d habitantes \n", populacao_carta2);
  printf("Área: %.2f km² \n", area_em_km2_carta2);
  printf("PIB: %.2f bilhões de reais \n", pib_carta2);
  printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos_carta2);


  return 0;
}
