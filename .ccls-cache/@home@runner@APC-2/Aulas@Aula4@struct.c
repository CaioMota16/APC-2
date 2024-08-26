#include <stdio.h>

struct Pessoa{
  char nome[100]; //100 bytes
  int idade;  //4 bytes
  char genero;	//1 byte
  };      //108 bytes
int main(void){
    printf("sizeof(struct Pessoa): %d\n",(int)sizeof(struct Pessoa) );
  return 0;
}