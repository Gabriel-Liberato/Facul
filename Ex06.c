#include <stdio.h>
//6. Faça um programa que calcule e mostre a área de
//um triângulo. Sabe-se que: Área = (base * altura)/2.

int main(void) {
  
 float A,B;
  
 

   printf("Informe a altura do triângulo, por gentileza: ");  
    scanf("%f", &A);
     printf("Informe a base do triângulo, por gentileza: ");  
      scanf("%f", &B);


  

  printf("A área do triangulo é: %2.f", (A*B)/2);  

 
  

return 0;

}