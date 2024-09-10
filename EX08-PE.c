// 8. Elabore uma função que calcule o imposto sobre um salário com base no valor recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser pago. (0.3 ponto)



#include <stdio.h>

void validarImposto(float salario){
 float imposto;
    
      if(salario >= 5000) {
          imposto = salario*0.2; 
              printf("O valor do imposto é de %.2f", imposto);           } else {    
              printf("O valor de impostos é de %.2f", salario*0.1);          }
}


int main() {

float salario,imposto;

                
        printf("Informe seu salário:");
            scanf("%f", &salario);


    validarImposto(salario);


 
 
    

    
    
    
    
    
    
    
    
    
    
    

    return 0;
}          
              
