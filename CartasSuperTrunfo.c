#include <stdio.h>

int main() {

    char estado1, estado2;
    char cidade1[50], cidade2[50];
    int codigo1, codigo2;
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // carta numero 1 ceara

    printf("Digite o estado (letra): \n"); // A
    scanf(" %c", &estado1);

    printf("Digite o codigo: \n"); // 1
    scanf("%d", &codigo1);

    printf("Digite a cidade: \n"); // Fortaleza
    scanf("%s", cidade1);

    printf("Digite a area (km²): \n"); // 313.8
    scanf("%f", &area1);

    printf("Digite a populacao: \n"); // 2578483
    scanf("%f", &populacao1);

    printf("Digite o PIB (em bilhoes): \n"); // 73
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos: \n"); // 70
    scanf("%d", &pontos1);

//carta num 2 bahia

    printf("Digite o estado (letra): \n"); // B
    scanf(" %c", &estado2);

    printf("Digite o codigo: \n"); // 02
    scanf("%d", &codigo2);

    printf("Digite a cidade: \n"); // Salvador
    scanf("%s", cidade2);

    printf("Digite a area: \n"); // 693.8 km²
    scanf("%f", &area2);

    printf("Digite a populacao: \n"); // 2600000
    scanf("%f", &populacao2);

    printf("Digite o PIB: \n"); // 62.954 bilhoes
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos: \n"); // 50
    scanf("%d", &pontos2);


    // saída carta 1

    printf("\n----- CARTA 1 -------\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %d\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %.2f milhoes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos1);


    //saida carta 2

    printf("\n----- CARTA2 -------\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %d\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %.2f milhoes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.3f bilhoes\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos2);




    return 0;
}