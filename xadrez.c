#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    //Iniciação das variaveis de movimntação
    int bispo = 1; // diagonal superior direita
    int torre = 1; //direita
    int rainha = 1; //esquerda

    //Variaveis para movimentação das peças
    //Inicialmente a quantidade de casas a movimentar
    //sera indicada diretamente na variavel

    int move_bispo = 5; // diagonal superior direita
    int move_torre = 5; //direita
    int move_rainha = 8; //esquerda

    // Implementação de Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for ( bispo = 1; bispo <= move_bispo; bispo++)
    {
        printf("Cima Direita\n");
    }
    printf("\n");
    // Implementação de Movimentação da Torre
    printf("Movimentação da Torre:\n");
    while (torre <= move_torre)
    {
        printf("Direita\n");
        torre++;
    }
    printf("\n");
    // Implementação de Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= move_rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    //Inicialização das variaveis

    int cavalo_x; // Esquerda, Direita
    int cavalo_y = 1; // Cima, Baixo
    
    //Declaração das variaveis de movimentação do cavalo Horizontal e Vertical
    int horizontal = 1; // Numero de movimentos na Horizontal
    int vertical = 2; // Numero de movimentos na Vertical

    printf("\n");
    printf("Movimentação do Cavalo:\n");
    for (cavalo_x = 1; cavalo_x <= horizontal; cavalo_x++)
    {
        while (cavalo_y <= vertical)
        {
            printf("Baixo\n");
            cavalo_y++;
        }
        printf("Esquerda\n");
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
