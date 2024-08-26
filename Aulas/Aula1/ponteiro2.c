#include <stdio.h>
// &x acessa oendereço EX:100

// x o conteúdo EX:5

//ptr_x acessa o endereço do conteúdo de ptr_x EX:100

// *ptr_x acessa o conteúdo de ptr_x que é o endereço que possui o valor x EX:5

// &ptr_x acessa o endereço de ptr_x EX:200

int main(void){
  int x = 5;
  int *ptr_x;
  ptr_x = &x;
  printf("&x: %p, x: %d\n", &x, x);
  printf("&ptr_x: %p, ptr_x: %p, *ptr_x: %d\n",&ptr_x, ptr_x, *ptr_x);
  
  //Como alterar o valor de x para 7, utilizando ptr_x?
  
  *ptr_x = 7;
  printf("&x: %p, x: %d\n", &x, x);
  
  ptr_x = NULL;
  printf("ptr_x: %p\n", ptr_x);
  return 0;
}