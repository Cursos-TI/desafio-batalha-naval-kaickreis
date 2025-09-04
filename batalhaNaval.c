#include <stdio.h>

#define TAM 5  // tamanho do tabuleiro (5x5 para exemplo)

int main() {
    int tabuleiro[TAM][TAM] = {0};

    // --- Definição manual das posições ---
    // Navio horizontal (linha 2, colunas 1 a 3)
    int linhaH = 2;
    int inicioColuna = 1;
    int tamanhoH = 3;

    // Navio vertical (coluna 4, linhas 0 a 2)
    int colunaV = 4;
    int inicioLinha = 0;
    int tamanhoV = 3;

    // --- Posicionar navio horizontal ---
    printf("Navio Horizontal:\n");
    for (int j = inicioColuna; j < inicioColuna + tamanhoH; j++) {
        tabuleiro[linhaH][j] = 1;
        printf("(%d, %d)\n", linhaH, j);
    }

    // --- Posicionar navio vertical ---
    printf("\nNavio Vertical:\n");
    for (int i = inicioLinha; i < inicioLinha + tamanhoV; i++) {
        tabuleiro[i][colunaV] = 1;
        printf("(%d, %d)\n", i, colunaV);
    }

    // --- Mostrar tabuleiro final ---
    printf("\nTabuleiro %dx%d:\n", TAM, TAM);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
