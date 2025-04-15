#include <stdio.h>

int main() {
    // Move a torre cinco casas para direita
    int torre = 5, bispo = 5, rainha = 8;
    for (int i=0;i<torre; i++)
    {
        printf("Direita!\n");
    };
    printf("\n");
    // Move o bispo 5 casas em diagonal
    for (int i=0; i<bispo; i++)
    {
        for(int j=0; j<1; j++)
        {
            printf("Cima, ");
        }
        printf("Direita!\n");
    };
    printf("\n");
    // Move a rainha 8 casas para esquerda
    for (int i=0; i<rainha; i++)
    {
        printf("Esquerda!\n");
    };
    printf("\n");
    // Move o Cavalo para cima e direita
    for (int i=0; i<1; i++)
    {
        for (int j=0; j<2; j++)
        {
            printf("Baixo!\n");
        };
        printf("Esquerda!\n");
    };
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
