//12. Pedro comprou um saco de ração com peso em
// quilos. Ele possui dois gatos, para os quais fornece a
//quantidade de ração em gramas. A quantidade diária
//de ração fornecida para cada gato é sempre a mesma.
//Faça um programa que receba o peso do saco de ração
//e a quantidade de ração fornecida para cada gato,
//calcule e mostre quanto restará de ração no saco após
// cinco dias.


#include <stdio.h>

int main() {
  
  float peso,quant,total; 

  printf("Informe o peso do saco de ração em Kg (Ex: 1 = 1000): ");
    scanf("%f", &peso);
  printf("Informe a quantidade diária fornecida aos gatos (Em gramas): ");
    scanf("%f", &quant);

  peso = peso*1000;
  quant = quant/2;

  total = 2*(quant*5);
  
  printf("A quantidade de ração forneciada a cada gato é de: g %.1f \n", quant);
  printf("O resto de ração no saco será de: Kg %.2f", peso - total);

  


  

    


  


  
}
