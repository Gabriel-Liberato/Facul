#include <stdio.h>
//5. Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e
//mostre o valor do aumento e o novo salário.

int main(void) {
  
 float sal,am,p,ns;
  
 

   printf("Informe seu salário, por gentileza: ");  
    scanf("%f", &sal);
     printf("Informe a porcentagem de aumento, por gentileza: ");  
      scanf("%f", &p);

  am = sal * p;
  ns = sal + am;
  

  printf("O aumento foi de: R$%2.f, portanto, seu novo salário é de:\nR$%2.f", am,ns);  

 
  






    
return 0;

}