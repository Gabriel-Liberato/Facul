#include <stdio.h>
//3. Faça um programa que receba três notas e seus respectivos pesos,
// calcule e mostre a média ponderada.

int main(void) {
  
 float n1,n2,n3,SP;
 int P1,P2,P3,MD;

   printf("Informe o primeiro número: ");  
    scanf("%f", &n1);
  printf("Informe o segundo número: ");  
    scanf("%f", &n2);
  printf("Informe o terceiro número: ");  
    scanf("%f", &n3);

  printf("Perfeito! Agora, informe respectivamente o peso de cada média: \n");
   scanf("%d\n", &P1);
    scanf("%d\n", &P2);
     scanf("%d", &P3);
  

  SP = P1+P2+P3;
  MD = (n1*P1)+(n2*P2)+(n3*P3);



  printf("A média ponderada dos números informados é: %.2f", MD/SP);
    
return 0;

}