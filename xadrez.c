#include <stdio.h>
#define casasBispo 5
#define casasTorre 5
#define casasRainha 8
#define casasCavalo 3
// Desafio de Xadrez - MateCheck
// printf("Cima\n"); printf("Baixo\n"); printf("Esquerda\n"); printf("Direita\n");
int main() {
    // Nível Novato - Movimentação das Peças
    int cont= 1;
    // Implementação de Movimentação do Bispo
    
    printf("-- BISPO -- \n");
    for (int cont=1; cont<=casasBispo; cont++){
        printf("%d. Cima + ", cont);
        printf("Direita\n");
    }
    // Implementação de Movimentação da Torre
    cont= 1;
    printf("-- TORRE -- \n");

    while (cont<=casasTorre){
        printf("%d. Direita \n", cont);
        cont++;
    }
    
    // Implementação de Movimentação da Rainha
    cont =1;
    printf("-- RAINHA -- \n");

    do {
        printf("%d. Esquerda\n", cont);
        cont++;
    }
    while(cont<=casasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Implementação movimentação do cavalo
    printf("-- CAVALO --\n");

    
    for(int cont=1;cont<=casasCavalo; cont++){
        printf("%d. Baixo \n", cont);
    }
    cont=(casasCavalo+1);
    while(cont>casasCavalo){
        printf("%d. Esquerda \n", cont);
        cont--;
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
