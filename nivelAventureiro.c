#include <stdio.h>

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[10][10], char *titulo) {
    int i, j;
    
    printf("%s\n\n", titulo);
    printf("   A B C D E F G H I J\n");

    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Exibe índice da linha
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int tabuleiro[10][10]; // Tabuleiro 10x10
    int i, j; 

    // Inicializando o tabuleiro com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Exibir tabuleiro com água (0)
    exibirTabuleiro(tabuleiro, "**TABULEIRO COM ÁGUA (0)**");

    // Posicionando um navio verticalmente na coluna C (índices 3 a 5)
    for (i = 2; i < 5; i++) {
        tabuleiro[i][2] = 3;
    }

    // Exibir tabuleiro com navio vertical
    exibirTabuleiro(tabuleiro, "**TABULEIRO COM NAVIO VERTICAL**");

    // Posicionando um navio horizontalmente na linha 5 (colunas H a J)
    for (j = 7; j < 10; j++) {
        tabuleiro[4][j] = 3;
    }

    // Exibir tabuleiro com navio horizontal
    exibirTabuleiro(tabuleiro, "**TABULEIRO COM NAVIO HORIZONTAL**");

    return 0;
}