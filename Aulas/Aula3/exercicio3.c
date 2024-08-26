#include <stdio.h>

int main(void){
  int vet[10] = {3,5,6,2,8,9,1,5,0,7};
  int mat [5][5];
  printf("Representação do vetor: \n");
  printf("&vet[0]: %p, vet: %d\n", &vet[0], vet[0]);
  printf("&vet[0]: %p, vet: %d\n", &vet[1], vet[1]);
  printf("&vet[0]: %p, vet: %d\n", &vet[2], vet[2]);

  printf("\nRepresentação de ponteiro: \n");
  printf("vet: %p,   *vet:  %d\n", vet, *vet);
  printf("vet+1: %p, *vet2: %d\n", vet+1, *(vet+1));
  printf("vet+2: %p, *vet3: %d\n", vet+2, *(vet+2));

  int *p = &vet[0]; // p = &vet[0];
  
  printf("\nRepresentação de ponteiro: \n");
  printf("p: %p,   *p:   %d\n", p, *p);
  printf("p+1: %p, *p+1: %d\n", p+1, *(p+1));
  printf("p+2: %p, *p+2: %d\n", p+2, *(p+2));
  
  int *p2 = &vet[5]; // p = &vet[5];

  printf("Representação do vetor: \n");
  printf("&vet[0]: %p, vet: %d\n", &vet[5], vet[5]);
  printf("&vet[0]: %p, vet: %d\n", &vet[6], vet[6]);
  printf("&vet[0]: %p, vet: %d\n", &vet[7], vet[7]);

  printf("\nRepresentação de ponteiro: \n");
  printf("p2: %p,   *p2:   %d\n", p2, *p2);
  printf("p2+1: %p, *p2+1: %d\n", p2+1, *(p2+1));
  printf("p2+2: %p, *p2+2: %d\n", p2+2, *(p2+2));
  
  return 0;
}