#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
   
    int tabuleiro[10][10]; // Tabuleiro 10x10
    int i, j; // Índices para linhas e colunas
    int linhaV = 2, colunaH = 7; // Linha e coluna para posicionamento dos navios
    char colunas[] = "ABCDEFGHIJ"; // Letras para colunas

    // Inicializa o tabuleiro com água (0)   

    printf("**TABULEIRO BATALHA NAVAL**\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }


    // Posicionando um navio verticalmente na linha 3, colunas 3 a 5.

    for (j = 2; j < 5; j++) {
        tabuleiro[linhaV][j] = 3;
    }

    // Posicionando um navio horizontalmente na coluna H (linha 5 a 7).

    for (i = 4; i < 7; i++) {
        tabuleiro[i][colunaH] = 3;
    }

    // Sugestão: Utilize printf para exibir as coordenadas de cada parte dos navios.
    // Exibir tabuleiro com coordenadas

     printf("   ");

     for (j = 0; j < 8; j++) { // Ajustado para colunas de A a H
         printf("%c ", colunas[j]);
     }

     printf("\n");   

     for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 8; j++) { // Ajustado para colunas de A a H
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
         

    printf("\n\n");


    return 0;
}
