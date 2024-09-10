#include <stdio.h>

// Função para calcular o quadrado de um número
int quadrado(int num) {
    return num * num;
}

// Função para verificar se um triângulo é retângulo
void verificaTrianguloRetangulo(int lado1, int lado2, int lado3) {
    int a, b, c; // Para armazenar os lados em ordem crescente

    // Ordena os lados em ordem crescente
    if (lado1 >= lado2 && lado1 >= lado3) {
        c = lado1;
        a = lado2;
        b = lado3;
    } else if (lado2 >= lado1 && lado2 >= lado3) {
        c = lado2;
        a = lado1;
        b = lado3;
    } else {
        c = lado3;
        a = lado1;
        b = lado2;
    }

    // Verifica se é um triângulo retângulo usando o Teorema de Pitágoras
    if (quadrado(c) == quadrado(a) + quadrado(b)) {
        printf("O triangulo e retangulo.\n");
    }
}

int main() {
    int lado1, lado2, lado3;

    printf("Digite os tres lados do triangulo (separados por espaco): ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    verificaTrianguloRetangulo(lado1, lado2, lado3);

    return 0;
}