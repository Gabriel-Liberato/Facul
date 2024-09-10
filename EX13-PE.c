#include <stdio.h>

int main() {
    int operacao;  
    float num1, num2, resultado; 

    printf("Escolha a operação desejada:\n");
    printf("1 - Soma (+)\n");
    printf("2 - Subtracao (-)\n");
    printf("3 - Multiplicacao (*)\n");
    printf("4 - Divisao (/)\n");
    printf("Digite o numero da operacao: ");
    
    scanf("%d", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operacao) {
        case 1:
            resultado = num1 + num2;  
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;  
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Erro: Operacao invalida.\n");
    }

    return 0;
}