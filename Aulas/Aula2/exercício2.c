#include <stdio.h>

int main(void){
  int inteiro = 100; //&inteiro = 0x100
  printf("t: %d, i+1 : %d, i+20: %d\n", inteiro, inteiro+1, inteiro+20);
  printf("t: %d, i-1 : %d, i-20: %d\n", inteiro, inteiro-1, inteiro-20);

  int *pint = &inteiro;

  printf("pint:%ul, pint+1:%ul, pint+20:%ul\n", pint, pint+1, pint+20);
    
  return 0;
}