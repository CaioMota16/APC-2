#include <stdio.h>

int main(void){
  int n = 1025;
  int i = 5;
  int *p;
  p = &n;
  //*p = 10;
  char *p_c;
  p_c = &n;
   printf("n: %d, byte 1: %d\n", n, *p_c);
  p_c++;
  printf("byte 2: %d\n", *p_c);
  *(p_c+2) = 1;
  printf("byte 3: %d\n", *(p_c+2));
  printf("valor de n: %d", *p_c+2);
  
  return 0;
}