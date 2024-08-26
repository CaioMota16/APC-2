#include <stdio.h>

// Função para calcular o número de caracteres em uma string
int calcularNumeroCaracteres(char *str) {
    char *ptr = str;  // Inicializa o ponteiro na primeira posição da string

    // Percorre a string até o caractere nulo
    while (*ptr != '\0') {
        ptr++;  // Avança o ponteiro para o próximo caractere
    }

    // Calcula o número de caracteres pela diferença de ponteiros
    return (int)(ptr - str);
}

int main(void) {
    // Exercício 2: a)
    printf("Exercício 2: a)\n");

    char string[50] = "Exercicio de APC II";

    char *ptr = string;
    char *lastdigit = NULL; 
    char caracter;

    printf("Digite um caractere: ");
    scanf(" %c", &caracter); 

    while (*ptr != '\0') {
        if (*ptr == caracter) {
            lastdigit = ptr; 
        }
        ptr++;
    }

    if (lastdigit != NULL) {
        printf("Caractere encontrado: '%c'\n", caracter);
        printf("Posição do caractere (endereço de memória): %p\n", (void *)lastdigit);
    } else {
        printf("Caractere não encontrado\n");
    }

    // Exercício 2: b)
    printf("\nExercício 2: b)\n");
    char str[] = "Exercicio de APC II";
    int numeroCaracteres = calcularNumeroCaracteres(str);

    printf("Número de caracteres: %d\n", numeroCaracteres);

    return 0;
}
