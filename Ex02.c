#include <stdio.h>
// Faça um programa que receba três notas, calcule e mostre a média aritmética.

int main(void) {
  
float m1,m2,m3;
float MA;
  
  printf("Informe o primeiro número: ");  
  scanf("%f", &m1);
  printf("Informe o segundo número: ");  
  scanf("%f", &m2);
  printf("Informe o terceiro número: ");  
  scanf("%f", &m3);

  MA=(m1+m2+m3)/3;
  

printf("A média arítmética dos números informados é: %2f\n", MA);
    
  return 0;
  
}