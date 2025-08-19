#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Destacar todas as variáveis para cada carta. 
    char Estado1, Estado2;
    char Cod1[50], Cod2[50]; 
    char Cidade1[50], Cidade2[50];
    int  PontosT1, PontosT2;
    float Area1, Area2, PIB1, PIB2, DensidadePo1, DensidadePo2, PIBPC1, PIBPC2, SuperPoder1, SuperPoder2; 
    unsigned long int Populacao1, Populacao2;



    // Abertura 
    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Seja bem-vindo ao Super Trunco C ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨Desenvolvido por: João Vitor Paiva Lima ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n \n");

    printf("Vamos iniciar!\n \n");
    // Cadastro da 1° Carta. 
    printf("========== Cadastre a 1° Carta: ==========\n");
    printf("Qual é o estado? \n");
    scanf("%c", &Estado1); //Utiliza-se %c pois o estado é composto por somente 1 Caracter. 

    printf("Qual o código? \n");
    scanf("%s", Cod1); // Utiliza-se %s (string) pois imprime uma cadeia de carateres. 

    printf("Qual o nome da cidade? \n");
    scanf("%s", Cidade1);

    printf("Qual a população? \n");
    scanf("%lu", &Populacao1); // Utiliza-se %lu pois utiliza-se unsigned long int para acomodar números maiores.

    printf("Qual área em km²? \n"); 
    scanf("%f", &Area1); // Utiliza-se %f pois imprime um número de ponto flutuante no formato padrão..

    printf("Qual é o PIB? \n");
    scanf("%f", &PIB1);

    printf("Quantos pontos turísticos possui? \n");
    scanf("%d", &PontosT1);

    DensidadePo1 = Populacao1 / Area1;
    PIBPC1 = PIB1 / Populacao1;
    SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosT1 + PIBPC1 + (1 / DensidadePo1); 

    // Cadastro da 2° Carta. 
    printf("========== Cadastre a 2° Carta: ==========\n\n");
    printf("Qual é o estado? \n");
    scanf(" %c", &Estado2);

    printf("Qual o código? \n");
    scanf("%s", Cod2);

    printf("Qual o nome da cidade? \n");
    scanf("%s", Cidade2);

    printf("Qual a população? \n");
    scanf("%lu", &Populacao2);

    printf("Qual área em km²? \n");
    scanf("%f", &Area2);

    printf("Qual é o PIB? \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos possui? \n");
    scanf("%d", &PontosT2);

    DensidadePo2 = Populacao2 / Area2;
    PIBPC2 = PIB2 / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosT2 + PIBPC2 + (1 / DensidadePo2);

    //Depois de captar todos os dados irá imprimir os dados na tela do usuário. 

    printf("========== Carta 1: ==========\n\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Cod1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("População: %lu \n", Populacao1);
    printf("Área: %.2f km² \n", Area1);
    printf("PIB: %.2f reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", PontosT1);
    printf("Densidade Populacional: %f hab/km² \n", DensidadePo1);
    printf("Pib per Capta: %f reais \n", PIBPC1);
    printf("Super Poder: %f \n\n", SuperPoder1);


    printf("========== Carta 2: ==========\n\n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Cod2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População: %lu \n", Populacao2);
    printf("Área: %.2f km² \n", Area2);
    printf("PIB: %.2f \n reais", PIB2);
    printf("Número de Pontos Turísticos: %d \n", PontosT2);
    printf("Densidade Populacional: %f hab/km² \n", DensidadePo2);
    printf("Pib per Capta: %f reais \n", PIBPC2);
    printf("Super Poder: %f \n\n", SuperPoder2);

    //Comparando as cartas

    printf("============= Agora vamos comprar as cartas!! ============= \n");
    printf("===== (1)verdadeiro – Carta 1 vence ===================== \n\n");
    printf("===== (0)falso – Carta 2 vence ========================== \n\n");

    printf("População: %d | Carta %c venceu \n", Populacao1 > Populacao2, (Populacao1 > Populacao2) ? Estado1 : Estado2);
    printf("Área: %d | Carta %c venceu \n", Area1 > Area2,(Area1 > Area2) ? Estado1 : Estado2);
    printf("PIB: %d | Carta %c venceu \n", PIB1 > PIB2, (PIB1 > PIB2) ? Estado1 : Estado2);
    printf("Pontos Turísticos: %d | Carta %c venceu \n", PontosT1 > PontosT2, (PontosT1 > PontosT2) ? Estado1 : Estado2);
    printf("Densidade Populacional: %d | Carta %c venceu \n", DensidadePo1 < DensidadePo2, (DensidadePo1 < DensidadePo2) ? Estado1 : Estado2);// menor densidade vence
    printf("Pib per Capta: %d | Carta %c venceu \n", PIBPC1 > PIBPC2, (PIBPC1 > PIBPC2) ? Estado1 : Estado2);



    return 0;
}
