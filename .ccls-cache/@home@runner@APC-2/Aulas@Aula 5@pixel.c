#include <stdio.h>

int main() {
  int imagem[10][10] = {
    {0x01010101,0x02020202,0x03030303},
    {0x04040404,0x05050505,0x06060606},
    {0x07070707,0x08080808,0x09090909}
  };
  unsigned char *p = (unsigned char *)imagem; 
  for(int lin = 0; lin < 3*4; lin = lin+4) {
    for(int col = 0; col < 3*4; col= col+4) {
      printf("Pixel[%d][%d]: ", lin/4, col/4);
      printf("A: %d,", p[lin*10 + col+0]);
      printf("R: %d,", p[lin*10 + col+1]);
      printf("G: %d,", p[lin*10 + col+2]);
      printf("B: %d\n", p[lin*10 + col+3]);
    }
    printf("\n");
  }
}