#include <stdio.h>

int main(){

//Atributos
char cidadeA1[20], cidadeB1[20];
int pontosturisticosA1, pontosturisticosB1;
double populacaoA1, populacaoB1, pibA1, pibB1;
float areaA1, areaB1, pibpercaptaA1, pibpercaptaB1, populacaoporareaA1, populacaoporareaB1;
//O pibpercapta e a populacaoporarea deve ser calculadas e apresentadas automaticamente

//Boas-Vindas
printf ("##SuperTrunfo Aventureiro!##\n");

//Declaração das Variaveis Primeira Carta
printf ("Dados da Primeira Carta:\n");

//Nome:
printf ("Nome da Cidade:\n");
scanf (" %[^\n]", cidadeA1);

//População
printf ("População:\n");
scanf ("%lf", &populacaoA1);

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

//Nome:
printf ("Nome da Cidade:\n");
scanf (" %[^\n]", cidadeB1);

//População
printf ("População:\n");
scanf ("%lf", &populacaoB1);

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

//Impressão das 2 cartas com os dados colocados
printf ("Carta A1\n");
printf ("Cidade: %s\n", cidadeA1);
printf ("População: %.0f\n", populacaoA1);
printf ("Pontos Turisticos: %d\n", pontosturisticosA1);
printf ("Área: %.0f km²\n", areaA1);
printf ("População por área: %.0f\n", populacaoporareaA1);
printf ("PIB: %.0f\n", pibA1);
printf ("PIB per capta: %.0f\n", pibpercaptaA1);

printf ("Carta B1\n");
printf ("Cidade: %s\n", cidadeB1);
printf ("População: %.0f\n", populacaoB1);
printf ("Pontos Turisticos: %d\n", pontosturisticosB1);
printf ("Área: %.0f km²\n", areaB1);
printf ("População por área: %.0f\n", populacaoporareaB1);
printf ("PIB: %.0f\n", pibB1);
printf ("PIB per capta: %.0f\n", pibpercaptaB1);





}