#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);



#include <string.h>


struct Carta {
    char estado[50];
    char codigo[50];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    fgets(carta1.estado, 50, stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = 0;  // Remove o \n

    printf("Codigo da carta: ");
    fgets(carta1.codigo, 50, stdin);
    carta1.codigo[strcspn(carta1.codigo, "\n")] = 0;

    printf("Nome da cidade: ");
    fgets(carta1.nome, 50, stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    getchar();

    
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    fgets(carta2.estado, 50, stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = 0;

    printf("Codigo da carta: ");
    fgets(carta2.codigo, 50, stdin);
    carta2.codigo[strcspn(carta2.codigo, "\n")] = 0;

    printf("Nome da cidade: ");
    fgets(carta2.nome, 50, stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

   
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib * 1000000000 / carta1.populacao; 
    carta2.pibPerCapita = carta2.pib * 1000000000 / carta2.populacao;

    
    printf("\n--- Dados Calculados ---\n");
    printf("Carta 1 - %s (%s):\n", carta1.nome, carta1.estado);
    printf("  Densidade Populacional: %.2f hab/km2\n", carta1.densidadePopulacional);
    printf("  PIB per capita: R$ %.2f\n", carta1.pibPerCapita);

    printf("Carta 2 - %s (%s):\n", carta2.nome, carta2.estado);
    printf("  Densidade Populacional: %.2f hab/km2\n", carta2.densidadePopulacional);
    printf("  PIB per capita: R$ %.2f\n", carta2.pibPerCapita);

    
    printf("\n--- Comparacao de Cartas (Atributo: Populacao) ---\n");
    printf("%s (%s): %d habitantes\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("%s (%s): %d habitantes\n", carta2.nome, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
