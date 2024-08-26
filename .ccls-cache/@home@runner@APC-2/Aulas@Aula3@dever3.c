#include <stdio.h>

int main(void) {
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    printf("matriz: %d", matriz);
    int *ptr = (int *)matriz; 

    
    int linha = 3;
    int coluna = 4;

    // Percorrer a matriz de forma linear
    for (int i = 0; i < linha * coluna; i++) {
        if (*ptr % 2 == 0) { // Verifica se o número é par
            *ptr = 0; // Zera o número par
        }
        ptr++; 
    }

    // Resetar o ponteiro para o início da matriz para impressão
    ptr = (int *)matriz;

    // Imprimir a matriz modificada
    printf("Matriz modificada:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d ", *(ptr + i * coluna + j));
        }
        printf("\n");
    }

    return 0;
}
