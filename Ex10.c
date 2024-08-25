//10. O custo ao consumidor de um carro novo é a soma do
//preço de fábrica com o percentual de lucro do distribuidor e
//dos impostos aplicados ao preço de fábrica.
//Faça um programa que receba o preço de fábrica de um
//veículo, o percentual de lucro do distribuidor e o percentual
//de impostos, calcule e mostre:
//a) o valor correspondente ao lucro do distribuidor;
//b) o valor correspondente aos impostos;
//c) o preço final do veículo

#include <stdio.h>

int main() {
   
 float pl, pf, pi, rpl,rpi;

  printf("Informe o preço de fábrica do veículo: ");
    scanf("%f", &pf);
  printf("Informe a porcentagem de lucro: ");
    scanf("%f", &pl);
  printf("Informe a porcentagem de impostos: ");
    scanf("%f", &pi);
  
rpl = ((pf * pl)/100);
rpi = ((pf*pi)/100);
  
  printf("O lucro do distribuidor é de R$: %.2f\n", rpl);
  printf("O valor dos impostos é de R$: %.2f\n", rpi);
  printf("O valor final do veículo é de R$: %.2f\n", pf+rpl+rpi); 

  
}
  





   


  



  





