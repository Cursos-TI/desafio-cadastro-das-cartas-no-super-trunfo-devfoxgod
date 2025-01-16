#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[10];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        Cidade cidades[ESTADOS * CIDADES_POR_ESTADO]; 
    int index = 0;

    printf("Bem-vindo ao Desafio Super Trunfo - Países!\n\n");

    for (int estado = 0; estado < ESTADOS; estado++) {
        for (int cidade = 0; cidade < CIDADES_POR_ESTADO; cidade++) {
            printf("Cadastro da carta para o Estado %c, Cidade %d:\n", 'A' + estado, cidade + 1);


            sprintf(cidades.codigo, "%c%d", 'A' + estado, cidade + 1);

            printf("Digite o nome da cidade: ");
            scanf(" %d[^\n]", cidades.nome);

            printf("Digite a população da cidade: ");
            scanf("%d", &cidades.populacao);

            printf("Digite a área da cidade (em km^2): ");
            scanf("%f", &cidades.area);

            printf("Digite o PIB da cidade (em bilhões): ");
            scanf("%f", &cidades.pib);

            printf("Digite o número de pontos turísticos: ");
            scanf("%d", &cidades.pontos_turisticos);

            printf("\n");
            index++;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
                printf("Cartas cadastradas:\n");
    for (index = 0; index < ESTADOS * CIDADES_POR_ESTADO; index++) {
        printf("\nCarta %s:\n", cidades.codigo);
        printf("Nome: %s\n", cidades.nome);
        printf("População: %d\n", cidades.populacao);
        printf("Área: %.2f km^2\n", cidades.area);
        printf("PIB: %.2f bilhões\n", cidades.pib);
        printf("Pontos turísticos: %d\n", cidades.pontos_turisticos);


    return 0;
}
