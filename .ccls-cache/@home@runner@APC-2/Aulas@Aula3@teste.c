#include <stdio.h>

int main(void){
  int n = 256;
  int *pn = &n;
  printf("%p\n", *pn);
  return 0;
}