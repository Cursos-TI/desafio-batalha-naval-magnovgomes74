#include <stdio.h>
    // Desafio Batalha Naval - MateCheck
    // Nível Mestre - Habilidades Especiais com Matrizes

// Criando a definição do tamanho do tabuleiro.
#define TAM 10    


// Função para exibir o tabuleiro.
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("  0 1 2 3 4 5 6 7 8 9\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


// Função para limpar o tabuleiro.
void limparTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}


// Criar Matriz.
void criarMatrizCone(int tabuleiro[TAM][TAM]) {

    // Criando a função 'origem' para definir o ponto fixado de todas as habilidades.
    int origemX = 5, origemY = 2; 

    for (int i = 0; i < 3; i++) {
        for (int j = -i; j <= i; j++) {
            tabuleiro[origemX + i][origemY + j] = 1;
        }
    }
}


// Criar Matriz Cruz.
void criarMatrizCruz(int tabuleiro[TAM][TAM]) {
    int origemX = 2, origemY = 3;

    for (int i = 0; i < 5; i++) tabuleiro[i][origemY] = 3;  // Linha vertical
    for (int j = 1; j <= 5; j++) tabuleiro[origemX][j] = 3; // Linha horizontal
}


// Criar Matriz Octaedro.
void criarMatrizOctaedro(int tabuleiro[TAM][TAM]) {
    int origemX = 5, origemY = 7;
    
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {

            // Usando operadores lógicos para definir a forma do Octaedro.
            if ((i == 0 && (j >= -2 && j <= 2)) || 
                (i == -1 && (j >= -1 && j <= 1)) || 
                (i == 1 && (j >= -1 && j <= 1)) || 
                (i == -2 && j == 0) || 
                (i == 2 && j == 0)) {
                tabuleiro[origemX + i][origemY + j] = 2;
            }
        }
    }
}



int main() {

    //Criando a matriz do tabuleiro.
    int tabuleiro[TAM][TAM];

    // Limpando o tabuleiro.
    limparTabuleiro(tabuleiro);

    // Exibindo o tabuleiro.
    printf("***TABULEIRO DE BATALHA NAVAL***\n\n");

    // Criando a Matriz do Cone.
    criarMatrizCone(tabuleiro);
    printf("*Tabuleiro com o Cone:*\n\n");

    // Exibindo o tabuleiro.
    exibirTabuleiro(tabuleiro);

    // Limpando o tabuleiro.
    limparTabuleiro(tabuleiro);


    // Criando a Matriz da Cruz.
    criarMatrizCruz(tabuleiro);
    printf("*Tabuleiro com a Cruz:*\n\n");

    // Exibindo o tabuleiro.
    exibirTabuleiro(tabuleiro);

    // Limpando o tabuleiro.
    limparTabuleiro(tabuleiro);

    // Criando a Matriz do Octaedro.
    criarMatrizOctaedro(tabuleiro);
    printf("*Tabuleiro com o Octaedro:*\n\n");

    // Exibindo o tabuleiro.
    exibirTabuleiro(tabuleiro);

    // Limpando o tabuleiro.
    limparTabuleiro(tabuleiro);



    // Exibir um tabuleiro com as habilidades Cone, Cruz e Octaedro separadas.
    criarMatrizCone(tabuleiro);
    criarMatrizCruz(tabuleiro);
    criarMatrizOctaedro(tabuleiro);
    
    // Exibir um tabuleiro com todas as habilidades em uma só matriz.
    printf("*Tabuleiro com todas as habilidades:*\n\n");
    exibirTabuleiro(tabuleiro);
        
    printf("\n\n");


    return 0;

}