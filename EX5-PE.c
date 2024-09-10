#include <stdio.h>

int ehPrimo(int numero) {
    // Verifica se o número é primo
    switch(numero) {
        case 2:
        case 3:
        case 5:
        case 7:
            return 1; // Números primos
        default:
            return 0; // Números não primos
    }
}

int main() {
    int numero;

    printf("Digite um numero inteiro de 1 a 10: ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 10) {
        if (ehPrimo(numero)) {
            printf("%d e primo.\n", numero);
        } else {
            printf("%d nao e primo.\n", numero);
        }
    } else {
        printf("Numero fora do intervalo valido.\n");
    }

    return 0;
}
    

    
    
    
    
    
    
    
    
    
    
    

          
              
