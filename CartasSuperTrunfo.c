#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Aluno Marlon dos Anjos

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Dados da carta 1
    char estado1;
    char codigo1[4];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Dados da carta 2
    char estado2;
    char codigo2[4];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Carta 1
    printf("Cadastro de Carta 1:\n");

    printf("Estado (letra de A a H:)");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01)");
    scanf("%s", codigo1);

    printf("Nome da cidade:");
    scanf("%s", nomedacidade1);

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área (km²)");
    scanf("%f", &area1);

    printf("PIB (em bilhões)");
    scanf("%f", &pib1);

    printf("Número de pontos Turísticos:");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    // Carta 2
    
    printf("Cadastro de Carta 2:\n");

    printf("Estado (letra de A a H:)");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02)");
    scanf("%s", codigo2);

    printf("Nome da cidade:");
    scanf("%s", nomedacidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área (km²)");
    scanf("%f", &area2);

    printf("PIB (em bilhões)");
    scanf("%f", &pib2);

    printf("Número de pontos Turísticos:");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição das cartas

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área %.2f km²\n", area1);
    printf("PIB %.2f bilhões de reais\n", pib1);
    printf("Númeoro de pontos turísticos: %d\n\n", pontosturisticos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área %.2f km²\n", area2);
    printf("PIB %.2f bilhões de reais\n", pib2);
    printf("Númeoro de pontos turísticos: %d\n\n", pontosturisticos2);


    
    
    return 0;
}
