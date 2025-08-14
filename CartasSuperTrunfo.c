#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Destacar todas as variáveis para cada carta. 
    char estado1, estado2;
    char CodigodaCarta1[50], CodigodaCarta2[50]; 
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, PontosTuristicos1, PontosTuristicos2;
    float area1, area2, pib1, pib2; 
   

    // Cadastro da 1° Carta. 
    printf("Vamos cadastrar a 1° Carta: \n");
    printf("Qual é o estado? \n");
    scanf("%c", &estado1); //Utiliza-se %c pois o estado é composto por somente 1 Caracter. 

    printf("Qual o código? \n");
    scanf("%s", &CodigodaCarta1); // Utiliza-se %s (string) pois imprime uma cadeia de carateres. 

    printf("Qual o nome da cidade? \n");
    scanf("%s", &cidade1);

    printf("Qual a população? \n");
    scanf("%d", &populacao1); // Utiliza-se %d pois imprime um inteiro no formato decimal.

    printf("Qual área em km²? \n"); 
    scanf("%f", &area1); // Utiliza-se %f pois imprime um número de ponto flutuante no formato padrão..

    printf("Qual é o PIB? \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos possui? \n");
    scanf("%d", &PontosTuristicos1);
    //Depois de captar todos os dados irá imprimir os dados na tela do usuário. 
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", CodigodaCarta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", PontosTuristicos1);

    // Cadastro da 2° Carta. 
    printf("Vamos cadastrar a 2° Carta: \n");
    printf("Qual é o estado? \n");
    scanf(" %c", &estado2);

    printf("Qual o código? \n");
    scanf("%s", &CodigodaCarta2);

    printf("Qual o nome da cidade? \n");
    scanf("%s", &cidade2);

    printf("Qual a população? \n");
    scanf("%d", &populacao2);

    printf("Qual área em km²? \n");
    scanf("%f", &area2);

    printf("Qual é o PIB? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos possui? \n");
    scanf("%d", &PontosTuristicos2);
    
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", CodigodaCarta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", PontosTuristicos2);


    return 0;
}
