#include <stdio.h>

int main(void){
  int n = 5;
  int lin;
  int col;
  int *pn = &n;
  printf("Representação de ponteiro: \n");
  printf("pn: %p, *pn: %d\n", pn, *pn);
  printf("Representação de vetor: \n");
  printf("pn: %p, *pn: %d\n", &pn[0], pn[0]);

  int num[3][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12},
  };
  
  for(int lin = 0; lin < 3; lin++) {
    for(int col = 0; col < 4; col++) {
      printf("num[%d][%d]: %d\n", lin, col, num[lin][col]);
    }
  }
  
  return 0;
}