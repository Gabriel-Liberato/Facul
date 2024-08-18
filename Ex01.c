#include <stdio.h>
// 1. Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

int main(void) {
  
 int n1,n2,n3,n4;
 
  
  printf("Informe o primeiro número:\n");  
    scanf("%d", &n1);
  printf("Informe o segundo número:\n");  
    scanf("%d", &n2);
  printf("Informe o terceiro número:\n");  
    scanf("%d", &n3);
  printf("Informe o quarto número:\n");  
    scanf("%d", &n4);


  
  printf("A soma de todos os números é: %d\n", n1+n2+n3+n4);
    
  return 0;
  
}