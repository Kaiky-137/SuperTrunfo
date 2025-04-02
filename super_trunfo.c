#include <stdio.h>

/*Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int */

int main(){

    //Carta1
    char estado1 = 'A';
    char codigoCarta1[4] = "A01";
    char nomeCidade1[50] = "Jacareí";
    int populacao1 = 300000.0;
    float area1 = 464000.0;
    float pib1 = 1400000.0;
    int pontosTuristicos1 = 3;

    //Carta2
    char estado2 = 'B';
    char codigoCarta2[4] = "B02";
    char nomeCidade2[50] = "Tiradentes";
    int populacao2 = 8000.0;
    float area2 = 8300.0;
    float pib2 = 200000.0;
    int pontosTuristicos2 = 16;

    //Exibindo as Cartas
    //Carta1:
    printf ("----Carta1---\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código da Carta: %s\n", codigoCarta1);
    printf ("Nome da Cidade: %s\n", nomeCidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área em Km2: %.2f\n", area1);
    printf ("PIB: %.2f\n", pib1);
    printf ("Pontos Turísticos: %d\n", pontosTuristicos1);

    //Carta2:
    printf ("---Carta2---\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código de Carta: %s\n", codigoCarta2);
    printf ("Nome da Cidade: %s\n", nomeCidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área em Km2: %.2f\n", area2);
    printf ("PIB: %.2f\n", pib2);
    printf ("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}