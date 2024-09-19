#include <stdio.h>
#include <math.h>

// move o cursor para a posição (x,y) do console
void gotoxy(int x, int y) {
  printf("\033[%d;%df", y, x);
}

// limpa a tela do console
void clear() {
  printf("\033[2J");
}

// função para desenhar um pixel na posição (x,y) do console
void draw_xy(int x, int y, unsigned char r, unsigned char g, unsigned char b) {
  // get console coordinates and draw rgbaPixel
  gotoxy(x, y);
  printf("\033[48;2;%d;%d;%dm  \033[0;00m", r, g, b);
}

#define R 0xff000000
#define G 0x00ff0000
#define B 0x0000ff00
#define A 0x000000ff

#define RGBA(r, g, b, a) (r << 24 | g << 16 | b << 8 | a)

int main() {
  // imagem 10x10
  int imagem[10][10] = {
    {RGBA(255, 0, 0, 255), RGBA(230, 25, 25, 255), RGBA(204, 51, 51, 255), RGBA(179, 76, 76, 255), RGBA(153, 102, 102, 255), RGBA(128, 128, 128, 255), RGBA(102, 153, 153, 255), RGBA(76, 179, 179, 255), RGBA(51, 204, 204, 255), RGBA(25, 230, 230, 255)},
    {RGBA(255, 25, 0, 255), RGBA(230, 51, 25, 255), RGBA(204, 76, 51, 255), RGBA(179, 102, 76, 255), RGBA(153, 128, 102, 255), RGBA(128, 153, 128, 255), RGBA(102, 179, 153, 255), RGBA(76, 204, 179, 255), RGBA(51, 230, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 51, 0, 255), RGBA(230, 76, 25, 255), RGBA(204, 102, 51, 255), RGBA(179, 128, 76, 255), RGBA(153, 153, 102, 255), RGBA(128, 179, 128, 255), RGBA(102, 204, 153, 255), RGBA(76, 230, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 76, 0, 255), RGBA(230, 102, 25, 255), RGBA(204, 128, 51, 255), RGBA(179, 153, 76, 255), RGBA(153, 179, 102, 255), RGBA(128, 204, 128, 255), RGBA(102, 230, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 102, 0, 255), RGBA(230, 128, 25, 255), RGBA(204, 153, 51, 255), RGBA(179, 179, 76, 255), RGBA(153, 204, 102, 255), RGBA(128, 230, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 128, 0, 255), RGBA(230, 153, 25, 255), RGBA(204, 179, 51, 255), RGBA(179, 204, 76, 255), RGBA(153, 230, 102, 255), RGBA(128, 255, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 153, 0, 255), RGBA(230, 179, 25, 255), RGBA(204, 204, 51, 255), RGBA(179, 230, 76, 255), RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 179, 0, 255), RGBA(230, 204, 25, 255), RGBA(204, 230, 51, 255), RGBA(179, 255, 76, 255), RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 204, 0, 255), RGBA(230, 230, 25, 255), RGBA(204, 255, 51, 255), RGBA(179, 255, 76, 255), RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
    {RGBA(255, 230, 0, 255), RGBA(230, 255, 25, 255), RGBA(204, 255, 51, 255), RGBA(179, 255, 76, 255), RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255), RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255), RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)}
  };
  union RGBA_Pixel {
    int pixel; // 4 bytes
    unsigned char rgba[4]; // 4 bytes
  };
  // copia imagem original para imagem 2
  int imagem2[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem2[x][y] = imagem[x][y];
  }

  // copia imagem original para imagem 2
  int imagem3[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) 
      imagem3[x][y] = imagem[x][y];
  }

  // imagem em branco
  int imagem4[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) 
      imagem4[x][y] = 0xFFFFFFFF; // Branco
  }

  int imagem5[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem5[x][y] = imagem[x][y];
  
  int imagem6[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) 
      imagem6[x][y] = imagem[x][y];

  int imagem7[10][10];
    for (int x = 0; x < 10; x++) {
      for (int y = 0; y < 10; y++) 
        imagem7[x][y] = imagem[x][y];

  // Exercício 1
  union RGBA_Pixel *pixels = imagem2;
  unsigned char *pchar2 = (unsigned char *)imagem2;
  // insira o seu código abaixo
  // soluçao:
  int b = 3;

  for (int x = 0; x < 10 * 10; x++) {
    pixels[x].rgba[3] = 0;
  }
  // insira o seu código acima

  // Exercício 2
  unsigned char *pchar3 = (unsigned char *)imagem3;
  // insira o seu código abaixo
  union RGBA_Pixel *pixels1 = imagem3;
  for (int x = 0; x < 100 ; x++) {
    int avg = round (pixels1[x].rgba[0]+pixels1[x].rgba[1]+pixels1[x].rgba[2]) / 3.0;
    pixels1[x].rgba[1] = avg;
    pixels1[x].rgba[2]= avg;
    pixels1[x].rgba[3]= avg;
  }
  // soluçao:

  // Exercício 3

  unsigned char *pchar4 = (unsigned char *)imagem4;
  union RGBA_Pixel *pixels2 = imagem4;
  // insira o seu código abaixo
  // soluçao:
  for (int lin = 0; lin < 10; lin++) {
    for (int col = 0; col < 10; col++) {
      if (lin == col) {
        // Draw the vertical line (blue)
        pixels2[(lin * 10) + col].rgba[1] = 255; 
        pixels2[(lin * 10) + col].rgba[2] = 0;
        pixels2[(lin * 10) + col].rgba[3] = 0;
      } else if (lin + col == 9) {
        // Draw the horizontal line (blue)
        pixels2[(lin * 10) + col].rgba[1] = 255;
        pixels2[(lin * 10) + col].rgba[2] = 0;
        pixels2[(lin * 10) + col].rgba[3] = 0;
      } 
    }
  }
  //Exercício 4

    // Adicionando uma borda
    unsigned char *pchar5 = (unsigned char *)imagem5;
    // insira o seu código abaixo
    for (int lin = 0; lin < 10; lin++) {
      for (int col = 0; col < 10; col++) {
        if (lin == 0 || lin == 9 || col == 0 || col == 9) {
          // Definir a cor da borda como rosa (R=255, G=0, B=128)
          pchar5[(lin * 10 * 4) + (col * 4) + 3] = 255; // Alpha (transparência)
          pchar5[(lin * 10 * 4) + (col * 4) + 2] = 127; // B
          pchar5[(lin * 10 * 4) + (col * 4) + 1] = 203;   // G
          pchar5[(lin * 10 * 4) + (col * 4)] = 255;     // R
        }
      }
    }

    // insira o seu código acima

    
  // Exercício 5
  // insira o seu código acima
    unsigned char *pchar6 = (unsigned char *)imagem6;
    union RGBA_Pixel *pixels3 = imagem6;
    for(int x = 0; x < 10; x++){
      for(int y = 0; y < 10; y++){
        if(x<=y){
        pixels3 [x * 10 + y].rgba[0] = 0;
        pixels3 [x * 10 + y].rgba[1] = 0;
        pixels3 [x * 10 + y].rgba[2] = 255;
        pixels3 [x * 10 + y].rgba[3] = 0;
        }
        else {
          pixels3 = imagem6;
        }
      }
    }

    //Exercício 6
    unsigned char *pchar7 = (unsigned char *)imagem7;
    union RGBA_Pixel *pixels4 = imagem7;
      for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
          if (y <= x) {
            // Preencher com cor verde (árvore invertida)
            pixels4[x * 10 + y].rgba[0] = 0;   // R (vermelho)
            pixels4[x * 10 + y].rgba[1] = 255; // G (verde)
            pixels4[x * 10 + y].rgba[2] = 0;   // B (azul)
            pixels4[x * 10 + y].rgba[3] = 255; // A (opacidade)
          } else {
            imagem[x][y];
          }
        }
      }


  // limpa a tela
  clear();
  gotoxy(1, 1);
  printf("Imagem original\n");
  // desenha a imagem original a partir da posição (0,2)
  int xoffset = 1, yoffset = 3;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x*2) + xoffset, y + yoffset, (imagem[x][y] & R) >> 24, (imagem[x][y] & G) >> 16, (imagem[x][y] & B) >> 8);
    }
  }

  gotoxy(25, 1);
  printf("Imagem2 sem a cor vermelha\n");
  xoffset = 25, yoffset = 3;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x*2) + xoffset, y + yoffset, (imagem2[x][y] & R) >> 24, (imagem2[x][y] & G) >> 16, (imagem2[x][y] & B) >> 8);
    }
  }

  gotoxy(1, 14);
  printf("Imagem3 com\nescala cinza\n");
  xoffset = 1, yoffset = 17;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x*2) + xoffset, y + yoffset, (imagem3[x][y] & R) >> 24, (imagem3[x][y] & G) >> 16, (imagem3[x][y] & B) >> 8);
    }
  }

  gotoxy(25, 14);
  printf("Imagem4 com o x azul");
  gotoxy(25, 15);
  xoffset = 25, yoffset = 17;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x*2) + xoffset, y + yoffset, (imagem4[x][y] & R) >> 24, (imagem4[x][y] & G) >> 16, (imagem4[x][y] & B) >> 8);
    }
  }

    gotoxy(1, 28);
    printf("Imagem5 com borda rosa");
    xoffset = 1, yoffset = 30;
    for (int x = 0; x < 10; x++) {
      for (int y = 0; y < 10; y++) {
        draw_xy((x*2) + xoffset, y + yoffset, (imagem5[x][y] & R) >> 24, (imagem5[x][y] & G) >> 16, (imagem5[x][y] & B) >> 8);
      }
    }
    
    gotoxy(25, 28);
    printf("Imagem6 com árvore de natal");
    xoffset = 25, yoffset = 30;
    for (int x = 0; x < 10; x++) {
      for (int y = 0; y < 10; y++) {
        draw_xy((x*2) + xoffset, y + yoffset, (imagem6[x][y] & R) >> 24, (imagem6[x][y] & G) >> 16, (imagem6[x][y] & B) >> 8);
      }
    }

      gotoxy(1, 42);
      printf("Imagem7 com árvore de natal invertida");
      xoffset = 1, yoffset = 44;
      for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
          draw_xy((x*2) + xoffset, y + yoffset, (imagem7[x][y] & R) >> 24, (imagem7[x][y] & G) >> 16, (imagem7[x][y] & B) >> 8);
        }
      }
  return 0;
     }
   }
  }
}