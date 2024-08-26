#include <stdio.h>

int main (void){
  //Exercício 1:
  printf("Exercício 1:\n");
  int i = 5;
  int *p;
  p = &i;
  printf("&p: %p\n", &p);
  printf("p(&i - endereço de i): %p\n", p);
   printf("*p (i - valor de i): %d\n",*p);
  *p = 7;
  printf("Escolha um novo valor para i: ");
  scanf("%d", &i);
  printf("p(&i - endereço de i): %p\n", p);
  printf("*p (i - valor de i modificado): %d\n", *p);
  //Exercício 2:
  printf("Exercício 2:\n");
  int numero = 0;
  printf("Número antes de ser transformado: %d\n", numero);
  int *num = &numero;
  *num = 5;
  printf("Novo número: %d\n", *num);
  //Exercício 3:
  printf("Exercício 3:\n");
  int n1 = 3, n2 = 5;
  printf("Número antes de ser transformado: n1:%d, n2:%d\n", n1, n2);
  int *p1 = &n1;
  int *p2 = &n2;
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
  printf("Números invertidos: n1:%d, n2:%d", n1, n2);
  return 0;
}