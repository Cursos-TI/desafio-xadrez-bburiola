#include <stdio.h>

int main() {
    // Constantes com o número de casas a serem percorridas por cada peça
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    // Movimento da Torre
    // A torre move-se em linha reta — aqui, 5 casas para a direita.
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }

    
    // Movimento do Bispo 
    // O bispo move-se em diagonal — aqui, 5 casas na diagonal superior direita.
    printf("\nMovimento do Bispo:\n");
    int contadorBispo = 0;
    while (contadorBispo < MOVIMENTO_BISPO) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    
    // Movimento da Rainha 
    // A rainha pode se mover em todas as direções — aqui, 8 casas para a esquerda.
    printf("\nMovimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < MOVIMENTO_RAINHA);

    return 0;
}