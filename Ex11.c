// 11. Faça um programa que receba o número de horas
// trabalhadas e o valor do salário mínimo, calcule e mostre o
// salário a receber, seguindo estas regras:
// a) a hora trabalhada vale a metade do salário mínimo.
// b) o salário bruto equivale ao número de horas
// trabalhadas multiplicado pelo valor da hora trabalhada.
// c) o imposto equivale a 3% do salário bruto.
// d) o salário a receber equivale ao salário bruto menos o
// imposto.


#include <stdio.h>

int main() {

  float ht,sm,vht,salarioAR,salarioB,imp;

 printf("Digite o número de horas diárias trabalhadas: ");
  scanf("%f",&ht);
printf("Digite o valor do salário mínimo: ");
  scanf("%f",&sm);

  vht = sm/2;
  salarioB = ht*vht;
  imp = (salarioB*3)/100;
  salarioAR = salarioB-imp;

  printf("O salário a receber é de R$ %.2f", salarioAR);

  

    


  


  
}
