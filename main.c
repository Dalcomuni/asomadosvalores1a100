#include <stdio.h>

int main(void) {
  int soma = 0;

  for(int i = 1; i < 101; i++) {
    soma += i;
  }
  printf("A soma dos valores de 1 a 100 é: %d", soma);
  return 0;
}