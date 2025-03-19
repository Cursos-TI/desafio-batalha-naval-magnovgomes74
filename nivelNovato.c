#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
   
    int tabuleiro[10][10]; // Tabuleiro 10x10
    int i, j; // Índices para linhas e colunas


    printf("***TABULEIRO DE BATALHA NAVAL***\n\n");


    // Inicializando o tabuleiro com água (0)   
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }


    // Exibe o tabuleiro com água (0)
    printf("**Tabuleiro com água (0)**\n\n");
    printf("   A B C D E F G H I J\n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    // Posicionando um navio verticalmente na Coluna C (índices 3 a 5)
    for (i = 2; i < 5; i++) {
        tabuleiro[i][2] = 3;
    }


    // Exibe o tabuleiro com o navio verticalmente
    printf("**Tabuleiro com navio vertical**\n\n");
    printf("   A B C D E F G H I J\n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    // Posicionando um navio horizontalmente na Linha 5 (colunas H a J)
    for (j = 7; j < 10; j++) {
        tabuleiro[4][j] = 3;
    }


    // Exibe o tabuleiro com o navio horizontalmente
    printf("**Tabuleiro com navio horizontal**\n\n");
    printf("   A B C D E F G H I J\n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");

    return 0;
}