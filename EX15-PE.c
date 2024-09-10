#include <stdio.h>

int main() {
    int moeda_origem, moeda_destino;
    float valor, valor_convertido;

    printf("Escolha a moeda de origem:\n");
    printf("1 - BRL\n2 - USD\n3 - EUR\n");
    scanf("%d", &moeda_origem);

    printf("Escolha a moeda de destino:\n");
    printf("1 - BRL\n2 - USD\n3 - EUR\n");
    scanf("%d", &moeda_destino);

    printf("Informe o valor a ser convertido: ");
    scanf("%f", &valor);

    if (moeda_origem == 1 && moeda_destino == 2) { 
        valor_convertido = valor * 0.19;
        printf("Valor convertido: %.2f USD\n", valor_convertido);
    } else if (moeda_origem == 1 && moeda_destino == 3) { 
        valor_convertido = valor * 0.16;
        printf("Valor convertido: %.2f EUR\n", valor_convertido);
    } else if (moeda_origem == 2 && moeda_destino == 1) { 
        valor_convertido = valor * 5.30;
        printf("Valor convertido: %.2f BRL\n", valor_convertido);
    } else if (moeda_origem == 3 && moeda_destino == 1) { 
        valor_convertido = valor * 6.20;
        printf("Valor convertido: %.2f BRL\n", valor_convertido);
    } else if (moeda_origem == 2 && moeda_destino == 3) { 
        valor_convertido = (valor * 5.30) / 6.20;
        printf("Valor convertido: %.2f EUR\n", valor_convertido);
    } else if (moeda_origem == 3 && moeda_destino == 2) { 
        valor_convertido = (valor * 6.20) / 5.30;
        printf("Valor convertido: %.2f USD\n", valor_convertido);
    } else if (moeda_origem == moeda_destino) { 
        printf("As moedas de origem e destino são as mesmas.\n");
    } else { // Caso de erro
        printf("Erro: Moeda inválida!\n");
    }

    return 0;
}