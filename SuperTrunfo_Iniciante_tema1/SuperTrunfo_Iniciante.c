#include <stdio.h>

int main(){
    //Titulo
    printf ("SuperTrunfo Paises\n");

//Variaveis
char cidadeA1[20], cidadeB1[20];
int populacaoA1, populacaoB1;
int pontosturisticosA1, pontosturisticosB1;
float areaA1, areaB1;
double pibA1, pibB1;

//Declaração das Variaveis Primeira Carta
printf ("Dados da Primeira Carta:\n");

//Nome:
printf ("Nome da Cidade:\n");
scanf (" %[^\n]", cidadeA1);

//População
printf ("População:\n");
scanf ("%d", &populacaoA1);

//Pontos Turisticos
printf ("Pontos Turisticos:\n");
scanf ("%d", &pontosturisticosA1);

//Area
printf ("Area da Cidade:\n");
scanf ("%g", &areaA1);

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
scanf ("%d", &populacaoB1);

//Pontos Turisticos
printf ("Pontos Turisticos\n");
scanf ("%d", &pontosturisticosB1);

//Area
printf ("Area da Cidade\n");
scanf ("%g", &areaB1);

//PIB
printf ("PIB da Cidade:\n");
scanf ("%lf", &pibB1);

//Impressão das 2 cartas com os dados colocados
printf ("Carta A01\n");
printf ("Cidade: %s\n", cidadeA1);
printf ("População: %d milhões\n", populacaoA1);
printf ("Pontos Turisticos: %d\n", pontosturisticosA1);
printf ("Area: %g km²\n", areaA1);
printf ("PIB: %.0f\n", pibA1);

printf ("Carta B01\n");
printf ("Cidade: %s\n", cidadeB1);
printf ("População: %d milhões\n", populacaoB1);
printf ("Pontos Turisticos: %d\n", pontosturisticosB1);
printf ("Area: %g km²\n", areaB1);
printf ("PIB: %.0f\n", pibB1);



}