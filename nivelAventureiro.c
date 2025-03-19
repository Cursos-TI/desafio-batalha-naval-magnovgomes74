#include <stdio.h>

    // Desafio Batalha Naval - MateCheck
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal

int main() {
    
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.

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


        // Posicionando um navio na diagonal oposta de todo tabuleiro.

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    for (i = 0; i < 10; i++) {
        tabuleiro[i][9-i] = 3;
    }

    // Exibe o tabuleiro apenas com a diagonal oposta preenchida

    printf("**Tabuleiro apenas com a diagonal oposta preenchida**\n\n");
    printf("   A B C D E F G H I J\n");

    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    // Posicinando um navio na diagonal principal com três indices(2,C), (3,D), (4,E).
    // Posicionando um navio na diagonal oposta com três indices(1,H), (2,G), (3,F).

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    tabuleiro[3][2] = 3;
    tabuleiro[4][3] = 3;
    tabuleiro[5][4] = 3;
    tabuleiro[2][7] = 3;
    tabuleiro[3][6] = 3;
    tabuleiro[4][5] = 3;
    


    // Exibe o tabuleiro com as duas diagonais preenchidas

    printf("**Tabuleiro com as duas diagonais preenchidas**\n\n");
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