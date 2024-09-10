// 7. Desenvolva uma função que receba um número inteiro e determine se ele é par ou ímpar. Exiba uma mensagem correspondente para cada caso. (0.3 ponto


#include <stdio.h>

void validarNumero(int num){
    if(num % 2 == 0){
        printf("É par!");
    }else{
        printf("É impar!");
    }
}
int main() {

int num;

            printf("Informe um número: ");
                scanf("%d", &num);
    
    validarNumero(num);        
   


 
 
    

    
    
    
    
    
    
    
    
    
    
    

    return 0;
}          
              
