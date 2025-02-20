#include <stdio.h>

int main(){

    char estado1, estado2;
    char codDaCarta1[20], codDaCarta2[20];
    char nomeDaCidade1[20], nomeDaCidade2[20];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int numeroPontosTuristicos1, numeroPontosTuristicos2;

    printf("Digite uma letra de A a H para representar o estado da carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: \n");
    scanf(" %[^\n]%*c", codDaCarta1);

    printf("Digite nome da cidade da carta 1: \n");
    scanf(" %[^\n]%*c", nomeDaCidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km² da carta 1: \n");
    scanf("%f", &areakm1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turísticos da carta 1: \n");
    scanf("%d", &numeroPontosTuristicos1);

    printf("Digite uma letra de A a H para representar o estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2: \n");
    scanf(" %[^\n]%*c", codDaCarta2);

    printf("Digite nome da cidade da carta 2: \n");
    scanf(" %[^\n]%*c", nomeDaCidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km² da carta 2: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos da carta 2: \n");
    scanf("%d", &numeroPontosTuristicos2);

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", areakm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);

    return 0;

}