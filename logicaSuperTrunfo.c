#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado [30];
    char codigo [50];
    char cidade [30];
    int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
    float capita;
    float divisao
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio


    //Ceará; 1; Fortaleza; 1.000.000; area 1521.11 km; 100.000; 50;
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o Código: \n");
    scanf("%s", codigo);
    
    printf("Digite a Cidade: \n");
    scanf("%s", cidade);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite pontos Turísticos: \n");
    scanf("%d", &turisticos);
    
    divisao =  populacao / area;
    printf("Densidade populacional: %.2f", divisao);

    //Bahia; 2; Salvador; 1.000.000; area 1521.11 km; 100.000; 40;
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o Código: \n");
    scanf("%s", codigo);
    
    printf("Digite a Cidade: \n");
    scanf("%s", cidade);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite pontos Turísticos: \n");
    scanf("%d", &turisticos);
    printf("Densidade populacional: %.2f", divisao);

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

    return 0;
}
