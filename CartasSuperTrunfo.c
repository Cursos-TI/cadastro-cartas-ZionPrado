#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
  printf("Primeira Carta: \n\n\n");


  char Cidade [50];
  char Estado;
  char Codigo [10];
  int populacao;
  int pontos;
  float PIB;
  float Area;
  

  printf("Digite sua Cidade: \n");
  fgets(Cidade, 50, stdin); // Entrar com Nome Composto Ex. Rio de Janeiro!



  printf("Digite a letra do Estado:\n");
  scanf("%c",&Estado);

  printf("Digite o Codigo coma Letra do seu Estado de 01 a 04 (Ex:A01):\n");
  scanf("%s", Codigo);

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

  float super;
   
  super = populacao + pontos + PIB + Area + percapita + 1/densidade;

  printf(" Super poder: %.2f\n\n\n", super);    

  printf("Segunda Carta:\n\n\n");

  char Cidade2 [60];
  char estado2;
  char Codigo2 [7];
  int populacao2;
  int pontos2;
  float PIB2;
  float Area2;
  
  printf("Digite sua Cidade: \n");
  scanf("%s", Cidade2);// Entrar com Nome Composto Ex. Rio de Janeiro!

  printf("Digite a letra do Estado: \n");
  scanf("%s", &estado2);

  printf("Digite a letra do estado e o codigo (Ex: A01):\n");
  scanf("%s", Codigo2);

  printf("Digite a População: \n");
  scanf("%d", &populacao2);

  printf("Digite a Área em Km²: \n");
  scanf("%f", &Area2);

  printf("Digite o PIB: \n");
  scanf("%f", &PIB2);

  printf("Digite a quantidade Pontos Turísticos: \n");
  scanf("%d", &pontos2);

  float densidade2;
  float percapita2;

  densidade2 = ( float ) populacao2 / Area2;
  percapita2 = ( float ) PIB2 / populacao2;

  printf(" Carta 2:\n");
  printf(" Estado: %c\n Código: %s\n Cidade: %s\n População: %d\n", estado2, Codigo2, Cidade2, populacao2);
  printf(" Área: %f\n PIB: %f\n Pontos Turísticos: %d\n", Area2, PIB2, pontos2);
  printf(" Densidade populacional: %.2f\n", densidade2);
  printf(" PIB per Capita: %.2f\n", percapita2);

  float super2;
   
  super2 = populacao2 + pontos2 + PIB2 + Area2 + percapita2 + 1/densidade2;

  printf(" Super poder: %.2f\n\n\n\n\n", super2);


  printf("Comparação de Cartas:\n\n");

  int resultpop;
  int resultArea;
  int resultPIB;
  int resultPT;
  int resultden;
  int resultper;
  int resultpoder;
  char Carta1 [20]= "Carta 1";
  char Carta2 [20]= "Carta 2";

  resultpop = populacao > populacao2;
  resultArea = Area > Area2;
  resultPIB = PIB > PIB2;
  resultPT = pontos > pontos2;
  resultden = densidade > densidade2;
  resultper = percapita > percapita2;
  resultpoder = super > super2;


  printf("População: %d\n", resultpop);
  if (populacao>populacao2);
  printf("%s Vence ", Carta1);
  elseif(populacao<populacao2);
  printf("%s Vence", Carta2);
  /*printf("População: %d\n", resultArea);
  printf("População: %d\n", resultPIB);
  printf("População: %d\n", resultPT);
  printf("População: %d\n", resultden);
  printf("População: %d\n", resultper);
  printf("População: %d\n", resultpoder);*/






  

  







return 0;
} 
