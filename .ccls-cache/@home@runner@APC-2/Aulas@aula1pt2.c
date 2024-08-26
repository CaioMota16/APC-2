#include <stdio.h>
// &x acessa oendereço
// x o conteúdo
//ptr_x acessa o endereço do conteúdo de ptr_x
// *ptr_x acessa o conteúdo de ptr_x
// &ptr_x acessa o endereço de ptr_x

int main(void){
  int x = 5;
  int *ptr_x;
  ptr_x = &x;
  printf("&x: %p, x: %d\n", &x, x);
  printf("&ptr_x: %p, ptr_x: %p, *ptr_x: %d\n",&ptr_x, ptr_x, *ptr_x);
  //Como alterar o valor de x para 7utilizando ptr_x?
  *ptr_x = 7;
  printf("&x: %p, x: %d\n", &x, x);
  return 0;
}