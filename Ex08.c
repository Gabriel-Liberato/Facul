#include <stdio.h>
#include <math.h>

//8. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:7. Faça um programa que calcule e mostre:
// a) o número digitado ao quadrado;
// b) o número digitado ao cubo;
// c) a raiz quadrada do número digitado;
// d) a raiz cúbica do número digitado.

int main(void) {
  float VL,RAIZ,QR,CB,RC;  
  printf("Informe um número positivo e maior que zero, por gentileza: ");  
    scanf("%f", &VL);

   while(VL <= 0){
   printf("Valor inválido. Por favor, digite um valor positivo e maior que zero: ");  
   scanf("%f", &VL);
   }

   QR = VL * VL;
   CB = VL * VL * VL;
   RAIZ = sqrt(VL);
   RC = cbrt(VL);

   printf("O quadrado de %.2f é: %.2f\n", VL, QR);
   printf("O cubo de %.2f é: %.2f\n", VL, CB); 
   printf("A raiz de %.2f é: %.2f\n", VL, RAIZ);
   printf("A raiz cúbica de %.2f é: %.2f\n", VL, RC);
 
  
   
   
   
    



 
  

return 0;

}