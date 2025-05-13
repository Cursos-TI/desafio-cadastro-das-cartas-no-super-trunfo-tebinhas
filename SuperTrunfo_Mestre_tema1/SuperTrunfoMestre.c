#include <stdio.h>

int main(){

//Atributos
char cidadeA1[20], cidadeB1[20], estadoA1[2], estadoB1[2];
int pontosturisticosA1, pontosturisticosB1;
unsigned long int populacaoA1, populacaoB1;
double pibA1, pibB1;
float areaA1, areaB1, pibpercaptaA1, pibpercaptaB1, populacaoporareaA1, populacaoporareaB1;

//Boas-Vindas
printf ("##SuperTrunfo Mestre!##\n");

//Declaração das Variaveis Primeira Carta
printf ("Dados da Primeira Carta:\n");

//Nome:
printf ("Estado:\n");
scanf ("%s", &estadoA1);

printf ("Nome da Cidade:\n");
scanf (" %[^\n]", &cidadeA1);

//População
printf ("População:\n");
scanf ("%lu", &populacaoA1);

//Pontos Turisticos
printf ("Pontos Turisticos:\n");
scanf ("%d", &pontosturisticosA1);

//Area
printf ("Area da Cidade:\n");
scanf ("%f", &areaA1);

//PIB
printf ("PIB da Cidade:\n");
scanf ("%lf", &pibA1);

//Declaração das Variaveis Segunda Carta
printf ("Dados da Segunda Carta:\n");

printf ("Estado:\n");
scanf ("%s", &estadoB1);

//Nome:
printf ("Nome da Cidade:\n");
scanf (" %[^\n]", &cidadeB1);

//População
printf ("População:\n");
scanf ("%lu", &populacaoB1);

//Pontos Turisticos
printf ("Pontos Turisticos:\n");
scanf ("%d", &pontosturisticosB1);

//Area
printf ("Area da Cidade:\n");
scanf ("%f", &areaB1);

//PIB
printf ("PIB da Cidade:\n");
scanf ("%lf", &pibB1);

//Calculo pibpercapta e densidade populacional
pibpercaptaA1 = pibA1 / populacaoA1;
pibpercaptaB1 = pibB1 / populacaoB1;
populacaoporareaA1 = populacaoA1 / areaA1;
populacaoporareaB1 = populacaoB1 / areaB1;

//Apresentação das Cartas:
//Carta A1
printf ("Carta A1\n");
printf ("Estado: %s, Cidade: %s\n", estadoA1 ,cidadeA1);
printf ("População: %lu\n", populacaoA1);
printf ("Pontos Turisticos: %d\n", pontosturisticosA1);
printf ("Área: %.0f km²\n", areaA1);
printf ("População por área: %.0f\n", populacaoporareaA1);
printf ("PIB: %.0f\n", pibA1);
printf ("PIB per capta: %.0f\n", pibpercaptaA1);

//Carta B1
printf ("Estado: %s, Cidade: %s\n", estadoB1 ,cidadeB1);
printf ("Cidade: %s\n", cidadeB1);
printf ("População: %lu\n", populacaoB1);
printf ("Pontos Turisticos: %d\n", pontosturisticosB1);
printf ("Área: %.0f km²\n", areaB1);
printf ("População por área: %.0f\n", populacaoporareaB1);
printf ("PIB: %.0f\n", pibB1);
printf ("PIB per capta: %.0f\n", pibpercaptaB1);

//Comparação das Cartas
printf("##Comparação das Cartas!##\n(Carta A ganha = 1 / Carta B ganha = 0)\n");
printf("População: %d\n",(populacaoA1 > populacaoB1));




}