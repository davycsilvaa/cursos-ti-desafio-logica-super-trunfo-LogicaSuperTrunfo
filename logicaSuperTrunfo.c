#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Super Trunfo em c: Fundamentos e Técnicas Avançadas

int main() {

    char estado, estado_2;
    char codigo_da_carta[20], codigo_da_carta_2[20], nome_da_cidade[30], nome_da_cidade_2[30];
    int populacao, populacao_2, pontos_turisticos, ponto_turistico_2;
    float area, area_2, pib, pib_2;

    /*ENTRADA DE DADOS DA CARTA 1*/
    printf("CARTA 1:\n");

    printf("Selecione o Estado (de A a H): \n");
    scanf(" %c", &estado);

    printf("Código da sua carta (use valores de 01 a 04 após a letra do seu estado escolhido, ex: A01, B04): \n");
    scanf("%s", codigo_da_carta);

    printf("Nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área em km2: \n");
    scanf("%f", &area);

    //CALCULANDO A DENSIDADE POPULACIONAL
    densidade_populacional = populacao / area;
    
    printf("PIB: \n");
    scanf("%f", &pib);

    //CALCULANDO O PIB PER CAPITA
    pib_per_capita = pib / populacao;
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    /*ENTRADA DE DADOS DA CARTA 2*/
    printf("CARTA 2:\n");

    printf("Selecione o Estado (de A a H): \n");
    scanf(" %c", &estado_2);

    printf("Código da sua carta (use de 01 a 04 após a letra do seu estado escolhido, ex: A01, B04): \n");
    scanf("%s", codigo_da_carta_2);

    printf("Nome da cidade: \n");
    scanf("%s", nome_da_cidade_2);

    printf("População: \n");
    scanf("%d", &populacao_2);

    printf("Área em km2: \n");
    scanf("%f", &area_2);

    //CALCULANDO A DENSIDADE POPULACIONAL
    densidade_populacional_2 = populacao_2 / area_2;
    
    printf("PIB: \n");
    scanf("%f", &pib_2);

    //CALCULANDO O PIB PER CAPITA
    pib_per_capita_2 = pib / populacao_2;
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &ponto_turistico_2);

    /*RESULTADO DA CARTA 1*/
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Densidade Populacional: %.3f\n", densidade_populacional);
    printf("Área em km2; %.2f\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Pib per capita: %.f\n", pib_per_capita);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    /*RESULTADO DA CARTA 2*/
    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código da carta: %s\n", codigo_da_carta_2);
    printf("Nome da cidade: %s\n", nome_da_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Densidade Populacional: %.3f\n", densidade_populacional_2);
    printf("Área em km2: %.2f\n", area_2);
    printf("PIB: %.2f Bilhões de reais\n", pib_2);
    printf("Pib per capita: %.f\n", pib_per_capita_2);
    printf("Número de pontos turísticos: %d\n", ponto_turistico_2);

    return 0;

}
