#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Carta 1 
    char estado1;
    char CodigodaCarta1[50]; 
    char cidade1[50];
    int populacao1, PontosTuristicos1;
    float area1, pib1; 
    //Carta 2 
    char estado2;
    char CodigodaCarta2[50]; 
    char cidade2[50];
    int populacao2, PontosTuristicos2;
    float area2, pib2; 

    // Cadastro da 1° Carta. 
    printf("Vamos cadastrar a 1° Carta: \n");
    printf("Qual é o estado? \n");
    scanf("%c", &estado1);

    printf("Qual o código? \n");
    scanf("%s", &CodigodaCarta1);

    printf("Qual o nome da cidade? \n");
    scanf("%s", &cidade1);

    printf("Qual a população? \n");
    scanf("%d", &populacao1);

    printf("Qual área em km²? \n");
    scanf("%f", &area1);

    printf("Qual é o PIB? \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos possui? \n");
    scanf("%d", &PontosTuristicos1);
    
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
    scanf(" A%c", &estado2);

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

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
