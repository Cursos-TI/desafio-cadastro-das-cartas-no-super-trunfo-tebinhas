#include <stdio.h>

int main(){
    //Titulo
    printf ("SuperTrunfo Paises\n");

//Variaveis
char cidadeA1[20],cidadeB1[20];
int populacaoA1,populacaoB1,pontosturisticosA1,pontosturisticosB1;
float areaA1,areaB1,pibA1,pibB1;

//Declaração das Variaveis Primeira Carta
printf ("Dados da Primeira Carta:\n");
//Nome:
printf ("Nome da Cidade:\n");
scanf (" %[^\n]",&cidadeA1);
//População
printf ("População:\n");
scanf ("%d",&populacaoA1);
//Pontos Turisticos
printf ("Pontos Turisticos:\n");
scanf("%d",&pontosturisticosA1);
//Area
printf ("Area da Cidade:\n");
scanf("%f",&areaA1);
//PIB
printf ("PIB da Cidade:\n");
scanf("%f",&pibA1);

//Declaração das Variaveis Segunda Carta
printf ("Dados da Segunda Carta:\n");
//Nome:
printf ("Nome da Cidade:\n");
scanf (" %[^\n]",&cidadeB1);
//População
printf ("População:\n");
scanf ("%d",&populacaoB1);
//Pontos Turisticos
printf ("Pontos Turisticos\n");
scanf("%d",&pontosturisticosB1);
//Area
printf ("Area da Cidade\n");
scanf("%f",&areaB1);
//PIB
printf ("PIB da Cidade:\n");
scanf("%f",&pibB1);


}