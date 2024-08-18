#include <stdio.h>
//4. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário,
// sabendo-se que este sofreu um aumento de 25%.

int main(void) {
  
 float sal,am;
  
 

   printf("Informe seu salário, por gentileza: ");  
    scanf("%f", &sal);

  am = sal * 0.25 + sal; 


  printf("Obrigado! Esse é seu novo salário após aumento de 25 porcento: \nR$%2.f", am);
  






    
return 0;

}