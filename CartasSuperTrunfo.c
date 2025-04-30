#include <stdio.h>
#include <stdlib.h>

int main(){
    //declarar variáveis (estado, código da carta, nome da cidade, população, área, PIB, número de pontos turísticos)

    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[51], nomeCidade2[51];
    int populacao1, populacao2;
    float area1_Km, area2_Km;
    float pib_1, pib_2;
    int ptsTuristicos1, ptsTuristicos2;
    float densidadePopulacional_1, densidadePopulacional_2;
    float pibPerCapita_1, pibPerCapita_2;

    //entrada & processamento da primeira carta
    printf("Cadastro da carta 1:\n");

    printf("Digite o estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o código:\n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomeCidade1);

    printf("Informe o tamanho da população:\n");
    scanf("%d", &populacao1);

    printf("Informe a área em Km²:\n");
    scanf("%f", &area1_Km);

    printf("Informe o PIB:\n");
    scanf("%f", &pib_1);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &ptsTuristicos1);

    densidadePopulacional_1 = (float)(populacao1/area1_Km);
    pibPerCapita_1 = (pib_1/populacao1);

    //entrada & processamento da segunda carta

    printf("Cadastro da carta 2:\n");

    printf("Digite o estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código:\n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomeCidade2);

    printf("Informe o tamanho da população:\n");
    scanf("%d", &populacao2);

    printf("Informe a área em Km²:\n");
    scanf("%f", &area2_Km);

    printf("Informe o PIB:\n");
    scanf("%f", &pib_2);

    printf("Número de pontos turísticos:\n");
    scanf("%d", &ptsTuristicos2);

    densidadePopulacional_2 = (float)(populacao2/area2_Km);
    pibPerCapita_2 = (pib_2/populacao2);
    //fim da parte de leitura e processamento dos dados

    //saída
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1_Km);
    printf("PIB: %.2f\n", pib_1);
    printf("Pontos turísticos: %d\n", ptsTuristicos1);

    //implementando a impressão da Densidade Populacional e do PIB Per Capita

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2_Km);
    printf("PIB: %.2f\n", pib_2);
    printf("Pontos turísticos: %d\n", ptsTuristicos2);

    //implementando a impressão da Densidade Populacional e do PIB Per Capita

    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional_2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_2);

    //fim do programa
    return 0;
}