//13. Cada degrau de uma escada tem X de altura. Faça
//um programa que receba essa altura e a altura que o
//usuário deseja alcançar subindo a escada, calcule e
//mostre quantos degraus ele deverá subir para atingir
//seu objetivo, sem se preocupar com a altura do
//usuário. Todas as medidas fornecidas devem estar em
//metros


#include <stdio.h>

int main() {
  
  float altura_degrau, altura_desejada;
  int num_degraus;

  
  printf("Digite a altura de cada degrau (em metros): ");
  scanf("%f", &altura_degrau);

  printf("Digite a altura que deseja alcançar (em metros): ");
  scanf("%f", &altura_desejada);

  
  num_degraus = (int) (altura_desejada / altura_degrau);

  
  if (altura_desejada > num_degraus * altura_degrau) {
      num_degraus++;
  }


  printf("Você deve subir %d degraus para atingir a altura desejada.\n", num_degraus);

  return 0;


  


  

    


  


  
}
