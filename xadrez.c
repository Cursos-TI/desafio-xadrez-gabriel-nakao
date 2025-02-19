#include <stdio.h>
#define casasBispo 5
#define casasTorre 5
#define casasRainha 8
#define casasCavalo 3
// Desafio de Xadrez - MateCheck
// printf("Cima\n"); printf("Baixo\n"); printf("Esquerda\n"); printf("Direita\n");

void fBispo(int fCont) {
    if (fCont<=casasBispo){
    printf("%d. Cima + ", fCont);
    printf("Direita\n");
    fBispo(fCont+1);
    }
}    // função nível mestre bispo

void fTorre(int fCont) {
    if (fCont<=casasTorre){
    printf("%d. Direita \n", fCont);
    fTorre(fCont+1);
    }
}    // função nível mestre torre

void fRainha(int fCont) {
    if (fCont<=casasRainha){
    printf("%d. Esquerda\n", fCont);
    fRainha(fCont+1);
    }
}    // função nível mestre rainha

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
    // Função declarada no cabeçalho
    cont=1;
    printf("-- BISPO NOVAMENTE (Mestre) --\n");
    fBispo(cont);
    // Final do Bispo Nível Mestre

    // Função declarada no cabeçalho
    cont=1;
    printf("-- TORRE NOVAMENTE (Mestre) --\n");
    fTorre(cont);
    // Final da Torre Nível Mestre

    // Função declarada no cabeçalho
    cont=1;
    printf("-- RAINHA NOVAMENTE (Mestre) --\n");
    fRainha(cont);
    // Final da Rainha Nível Mestre

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    printf("-- CAVALO NOVAMENTE (Mestre) \n"); 
    cont=1;
    while(cont<=(casasCavalo+1)){
        switch (cont){
            case(1):
                printf("%d. Cima \n", cont);
                cont++;
                break;
            case(2):
                printf("%d. Cima \n", cont);
                cont++;
                break;
            case(3):
                printf("%d. Cima \n", cont);
                cont++;
                break;
            case(4):
                printf("%d. Direita \n", cont);
                cont++;
                break;
            default:
                break;     
        }
    }

    return 0;
}
