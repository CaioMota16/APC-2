#include <stdio.h>

struct Pessoa {
  char nome[100];      // 100 bytes
  int idade;           //   4 bytes
  char genero; // M, F //   1 byte
};

int main(void) {
  struct Pessoa pessoa1 = {"João", 30, 'M'};
  //struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};


  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Gênero: %c\n", pessoa1.genero);

  struct Pessoa pessoa2;
    printf("Escreva um nome: ");
    scanf("%[^\n]s", pessoa2.nome);
    printf("Escreva sua idade: ");
    scanf("%d", &pessoa2.idade);
    getchar();
    printf("Escreva seu gênero: ");
    scanf("%c", &pessoa2.genero);
  
  // Obtenha do console o nome, a idade e o gênero da pessoa 2.
    printf("Nome: %s\n", pessoa2.nome);
    printf("Idade: %d\n", pessoa2.idade);
    printf("Gênero: %c\n", pessoa2.genero);
  // Em seguida exiba esses dados de volta pro console.

  return 0;
}