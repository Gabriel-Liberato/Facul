// 9. Sabe-se que: pé = 12 polegadas
//  1 jarda = 3 pés
//  1 milha = 1,760 jarda
//  Faça um programa que receba uma medida em pés, faça as conversões a seguir e
//  mostre os resultados. a) polegadas; b) jardas; c) milhas.

#include <stdio.h>

int main(void) {

  float N, P, J, M, pes;

  printf("Informe um número, por gentileza: ");
  scanf("%f", &N);

  P = N * 12;
  J = N / 3;
  M = 1760; 

  printf("O valor de %.2f pés convertido em polegadas é: %.2f\n", N, P);
  printf("O valor de %.2f pés convertido em jardas é: %.2f\n", N, J);
  printf("O valor de %.2f pés convertido em milhas é: %f\n", N, J/M);

  return 0;
}