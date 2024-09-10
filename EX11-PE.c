#include <stdio.h>

float calcularDescontoICMS(float valorProduto) {
    float valorComDesconto;

    if (valorProduto <= 1000.00) {
        valorComDesconto = valorProduto * 0.95;  
    } else if (valorProduto <= 5000.00) {
        valorComDesconto = valorProduto * 0.90; 
    } else {
        valorComDesconto = valorProduto * 0.85; 
    }

    return valorComDesconto;
}

int main() {
    float valorProduto, valorFinal;

    
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valorProduto);

    
    valorFinal = calcularDescontoICMS(valorProduto);

   
    printf("O valor do produto com o desconto de ICMS é: R$ %.2f\n", valorFinal);

    return 0;
}
