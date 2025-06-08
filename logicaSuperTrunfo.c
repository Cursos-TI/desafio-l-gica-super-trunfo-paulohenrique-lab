#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char Estado [30];
    char Codigo da carta [10];
    char Nome da Cidade [30];
    int Populacao;
    float Area em km;
    float PIB;
    int Numero de pontos turisticos;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Desafio SuperTrunfo"\n);

    printf("Digite o nome o Estado: \n");
    scanf("%s", Estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Codigo da carta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nome da Cidade);

    printf("Digite a população: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área em km: \n");
    scanf("%f", &Area em km);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite quantidade de pontos turísticos: \n");
    scanf("%d", &Numero de pontos turisticos);

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
