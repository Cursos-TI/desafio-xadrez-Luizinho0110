#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

    const int bispo_movimento = 5;
    const int rainha_movimento =  8;
    const int torre_movimento = 5;
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Variáveis
    int bispo = 0;
    int bispo_dir = 0;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Movimentação Bispo
    printf("--- BISPO ---");
    printf("Escolha a direção para o bispo se movimentar:\n1.Direita-cima\n2.Esquerda-cima\n");
    scanf("%d", &bispo_dir);

    if (bispo_dir == 1)
    {
        for(bispo = 0; bispo < bispo_movimento; bispo++){
            printf("Direita\n");
        }
    }
    else
    {
        for(bispo = 0; bispo < bispo_movimento; bispo++){
            printf("Esquerda\n");
        }
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int torre = 0, torre_dir = 0;

    printf("\n--- TORRE ---\n");
    printf("Escolha a direção para a torre se movimentar:\n1. Direita\n2. Esquerda\n3. Cima\n");
    scanf("%d", &torre_dir);

    switch (torre_dir)
    {
    case 1:
        for (torre = 0; torre < torre_movimento; torre++){
            printf("Direita");
        }
        break;

    case 2:
        for(torre = 0; torre < torre_movimento; torre++){
            printf("Esquerda");
        }
        break;

    case 3:
        printf("A Torre está se movimentando para Cima...\n");
            for(torre = 0; torre < torre_movimento; torre++){
                printf("Cima\n");
            }
        break;

    default:
        printf("Movimento indisponível!\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int rainha = 0;
    int rainha_dir = 0;

    printf("\n--- Rainha ---\n\n");
    printf("Escolha a direção para a rainha se movimentar:\n1.Direita\n2.Esquerda\n");
    scanf("%d", &rainha_dir);
    if (rainha_dir == 1)
    {
        for(rainha = 0; rainha < rainha_movimento; rainha++)
        printf("Direita\n");
    }
    else
    {
        for(rainha = 0; rainha < rainha_movimento; rainha++)
        printf("Esquerda\n");
    }

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
