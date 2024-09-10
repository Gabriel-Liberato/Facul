#include <stdio.h>

int formaTriangulo(int lado1, int lado2, int lado3) {
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        return 1; // Os lados formam um triângulo válido
    } else {
        // Caso contrário, não é um triângulo válido
        return 0;
    }
}

int main() {
    int lado1, lado2, lado3;

    printf("Digite os tres lados do triangulo (separados por espaco): ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (formaTriangulo(lado1, lado2, lado3)) {
        printf("Os lados formam um triangulo valido.\n");
    } else {
        printf("Os lados nao formam um triangulo valido.\n");
    }

    return 0;
}