#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


//Funções recursivas para o desafio Nível Mestre - Funçoes Recursivas e Loops Aninhados:

void movimentaBispo(int n){
    if (n > 0){
        printf("Cima - Direita\n");
        movimentaBispo(n-1);
    }
}
void movimentaTorre(int n){
    int i = 1;
    if(n > 0){
        printf("Direita\n");
        movimentaTorre(n-1);
    }
}
void movimentaRainha( int n){
    if (n > 0){
        printf("Esquerda\n");
        movimentaRainha(n-1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças

    printf("Nível Novato - Movimentação das Peças\n\n");

    //Iniciação das variaveis de movimntação
    int bispo = 1; // diagonal superior direita
    int torre = 1; //direita
    int rainha = 1; //esquerda

    //Variaveis para movimentação das peças
    //Inicialmente a quantidade de casas a movimentar sera indicada diretamente na variavel.

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
    printf("\n");
    
    printf("===============================================================\n\n");
    printf("Nível Aventureiro - Movimentação do Cavalo\n\n");

    // Nível Aventureiro - Movimentação do Cavalo

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

    printf("===============================================================\n\n");
    printf("Nível Mestre - Funções Recursivas e Loops Aninhados\n\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados

    printf("Movimentação do Bispo:\n");
    movimentaBispo(5);
    printf("\n");

    printf("Movimentação da Torre:\n");
    movimentaTorre(5);
    printf("\n");

    printf("Movimentação da Rainha:\n");
    movimentaRainha(8);
    printf("\n");

    printf("Movimentação do Cavalo:\n");
  
    for (int x=0, y=0; y < 2; y++)// Altere x e y para definir a direção do movimento do Cavalo
        {
            for (int k = 0; k < (y < 1 ? 2: 1); k++)
            {
                if(y == 0){
                    printf("Cima\n");
                } else {
                    printf("Direita\n");
                } 
            }
        }

    printf("\n");
    return 0;
}
