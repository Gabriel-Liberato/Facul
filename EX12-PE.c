#include <stdio.h>

float calcularIPTU(float valorVenal) {
    float valorIPTU;

    
    if (valorVenal <= 100000.00) {
       
        valorIPTU = valorVenal * 0.01;
    } else if (valorVenal <= 300000.00) {
       
        valorIPTU = valorVenal * 0.015;
    } else if (valorVenal <= 500000.00) {
      
        valorIPTU = valorVenal * 0.02;
    } else {
       
        valorIPTU = valorVenal * 0.025;
    }

   
    return valorIPTU;
}

int main() {
    float valorVenal, valorIPTU;

    
    printf("Digite o valor venal do imóvel: R$ ");
    scanf("%f", &valorVenal);
   
    valorIPTU = calcularIPTU(valorVenal);


    printf("O valor do IPTU é: R$ %.2f\n", valorIPTU);

    return 0;
}
