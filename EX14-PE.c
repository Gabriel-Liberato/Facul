#include <stdio.h>

int main() {
    int turno;

    printf("Informe o turno do dia (1- Manhã, 2- Tarde, 3- Noite): ");
    scanf("%d", &turno);

    if (turno == 1) {
        printf("Bom dia!\n");
    } else if (turno == 2) {
        printf("Boa tarde!\n");
    } else if (turno == 3) {
        printf("Boa noite!\n"); 
    } else {
        printf("Erro: Turno inválido!\n");
    }

    return 0;

}   