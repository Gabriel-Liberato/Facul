//12. Escreva um programa que solicite ao usuário 6 números inteiros. Para cada
//número, verifique se ele é par ou ímpar. Se o número for par, verifique se é maior
//que 10 ou não. Se for ímpar, verifique se é menor que 50 ou não. (0.4 ponto)
//Entrada: 6 números inteiros.
//Saída: paridade do número e a classificação adicional.
#include <stdio.h>

void ParImpar(int n){
int x,resultado;   
 

    if (n % 2 == 0 && n < 10) {  
        printf("%d é par e menor que 10.\n", n);
    } else if (n % 2 == 0 && n > 10) {
        printf("%d é par e maior que 10.\n", n);
    } else if (n % 2 == 0 && n == 10) {
        printf("O número é igual a 10.\n");
        
        
    } else if (n % 2 != 0 && n < 50) {
        printf("%d é ímpar e menor que 50.\n", n);
    } else if (n % 2 != 0 && n > 50) {
        printf("%d é ímpar e maior que 50.\n", n);
    } else { 
        printf("O número é igual a 50.\n");
    }


}





int main(){

int numero,x;


    
        for(x = 1; x <= 6; x++){
            printf("Informe o %d° número: ", x);
                scanf("%d", &numero);
                ParImpar(numero);
        }
    
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
}