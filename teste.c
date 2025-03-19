#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
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

    // Posicionando um navio horizontalmente na Linha 5 (colunas H a J)
    for (j = 7; j < 10; j++) {
        tabuleiro[4][j] = 3;
    }

    // Exibe o tabuleiro com dois navios posicionados na vertical e horizontal;
    printf("**Tabuleiro com dois navios na vertical e horizontal**\n\n");
    printf("   A B C D E F G H I J\n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal

    // Posicionando um navio apenas na diagonal principal de todo tabuleiro.

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    for (i = 0; i < 10; i++) {
        tabuleiro[i][i] = 3;
    }


    // Exibe o tabuleiro apenas com a diagonal principal preenchida

    printf("**Tabuleiro apenas com a diagonal principal preenchida**\n\n");
    printf("   A B C D E F G H I J\n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");



    // Exibe o tabuleiro com todos os navios posicionados, incluindo na diagonal e na horizontal/vertical.

    
    
    
    
    printf("\n\n");

    return 0;
}