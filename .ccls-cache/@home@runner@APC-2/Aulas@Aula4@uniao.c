#include <stdio.h>
union RGBA_Pixel {
  int pixel;
  unsigned char rgba[4];
};

int main(void) {
  union RGBA_Pixel pixel1;
  pixel1.pixel = 0xff0000;
  printf("Pixel: %X\n", pixel1.pixel);
  printf("R: %d\n", pixel1.rgba[0]);
  printf("G: %d\n", pixel1.rgba[1]);
  printf("B: %d\n", pixel1.rgba[2]);
  printf("A: %d\n", pixel1.rgba[3]);
  
  return 0;
}