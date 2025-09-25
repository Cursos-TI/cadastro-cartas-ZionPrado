#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

  char Cidade [50];
  char Estado;
  char Codigo [5];
  int populacao;
  int pontos;
  float PIB;
  float Area;
  

  printf("Digite sua Cidade: \n");
  fgets(Cidade, 50, stdin);// Entrar com Nome Composto Ex. Rio de Janeiro!



  printf("Digite o Estado:\n");
  scanf("%c",&Estado);

  printf("Digite o Codigo coma Letra do seu Estado de 01 a 04:\n");
  scanf("%s", &Codigo);

  printf("Digite a População: \n");
  scanf("%d", &populacao);

  printf("Digite a Área em Km²: \n");
  scanf("%f", &Area);

  printf("Digite o PIB: \n");
  scanf("%f", &PIB);

  printf("Digite a quantidade Pontos Turísticos: \n");
  scanf("%d", &pontos);

  float densidade;
  float percapita;

  densidade = ( float ) populacao / Area;
  percapita = ( float ) PIB / populacao;


  printf(" Carta 1:\n");
  printf(" Estado: %c\n Código: %s\n Cidade: %s População: %d\n", Estado, Codigo, Cidade, populacao);
  printf(" Área: %f\n PIB: %f\n Pontos Turísticos: %d\n", Area, PIB, pontos);
  printf(" Densidade populacional: %.2f\n", densidade);
  printf(" PIB per Capita: %.2f\n", percapita);








return 0;
} 
