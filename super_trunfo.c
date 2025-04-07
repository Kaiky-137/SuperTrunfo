#include <stdio.h>

int main (){

    //Cidade1
    char estado1 = 'A';                                                 //Letra de A a H
    char codigoCarta1[4] = "A01";                                       // Ex: A01, B01
    char nomeCidade1[50] = "Jacarei";                                   // Nome da cidade
    int populacao1 = 3000000;                                           // Quantidade de habitantes
    float area1 = 464.3;                                                // Área em Km2
    float pib1 = 1400000.0;                                             // Produto Interno Bruto
    int pontosTuristicos1 = 3;                                          // Pontos turisticos totais
    float densidadePopulacional1 = populacao1 / area1;                  // Densidade Populacional 
    float pibPerCapita1 = pib1 / populacao1;                            // Pib Per Capita 
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1/ densidadePopulacional1);


    //Cidade2
    char estado2 = 'B';                                                 //Letra de A a H
    char codigoCarta2[4] = "B01";                                       // Ex: A01 e B01
    char nomeCidade2[50] = "Tiradentes";                                // Nome da cidade
    int populacao2 = 80000;                                             // Quantidade de habitantes
    float area2 = 83.0;                                                 // Área em Km2
    float pib2 = 20000000.0;                                            // Produto Interno Bruto
    int pontosTuristicos2 = 16;                                         // Pontos turisticos totais
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/ densidadePopulacional2);


    // Exibindo as cartas:
    printf ("----Cidade 1---- \n");
    printf ("Estado: %c\n", estado1);
    printf ("Código da Carta: %s\n", codigoCarta1);
    printf ("Nome da cidade: %s\n", nomeCidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %f\n", area1);
    printf ("PIB: %.2f\n", pib1);
    printf ("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf ("Densidade Populacional: %.1f\n", densidadePopulacional1);
    printf ("PIB per Capita: %.2f\n", pibPerCapita1);
    printf ("Super Poder: %.2f\n\n", superPoder1);

    printf ("----Cidade 2---- \n");
    printf ("Estado: %c\n", estado2);
    printf ("Código da Carta: %s\n", codigoCarta2);
    printf ("Nome da cidade: %s\n", nomeCidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f\n", area2);
    printf ("PIB: %.2f\n", pib2);
    printf ("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf ("Densidade Populacional: %.1f\n", densidadePopulacional2);
    printf ("PIB per Capita: %.2f\n", pibPerCapita2);
    printf ("Super Poder %.2f\n\n", superPoder2);
 
    // Comparação das características das cartas: Carta 1 (1), Carta 2 (0)
 
    printf ("-----Resultado das comparações-----\n");
    printf ("Maior populaçao: %d\n", populacao1 > populacao2);
    printf ("Maior Área: %d\n", area1 > area2);
    printf ("Maior PIB: %d\n", pib1 > pib2);
    printf ("Mais Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf ("Maior PIB per Captia: %d\n", pibPerCapita1 > pibPerCapita2);
    printf ("Menor densidade populacional: %d\n", densidadePopulacional1 < densidadePopulacional1);
    printf ("Super Poder: %d", superPoder1 > superPoder2);

    return 0;
}
