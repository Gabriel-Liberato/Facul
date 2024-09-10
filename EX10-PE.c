//10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e alíquotas progressivas para calcular o valor da contribuição:

//● Até R$ 1.320,00: 7,5%
//● De R$ 1.320,01 até R$ 2.571,29: 9%
//● De R$ 2.571,30 até R$ 3.856,94: 12%
//● De R$ 3.856,95 até R$ 7.507,49: 14%
//Use a estrutura condicional aninhada para calcular o desconto corretamente. (0.4 ponto)



#include <stdio.h>

void calcularINSS(float salarioBruto, float *contribuicaoINSS){

    
    
    if (salarioBruto <= 1320.00) {
        *contribuicaoINSS = salarioBruto * 0.075; 
    } else if (salarioBruto <= 2571.29) {
        *contribuicaoINSS = salarioBruto * 0.09;  
    } else if (salarioBruto <= 3856.94) {
        *contribuicaoINSS = salarioBruto * 0.12;  
    } else if (salarioBruto <= 7507.49) {
        *contribuicaoINSS = salarioBruto * 0.14;  
    } else {
        
        *contribuicaoINSS = 7507.49 * 0.14;      
    }
}        
int main() {
float salarioBruto, contribuicao;
        
            printf("Digite o salario bruto da pessoa: ");
                  scanf("%f", &salarioBruto);

            calcularINSS(salarioBruto, &contribuicao);

            printf("Valor da contribuicao ao INSS: R$ %.2f\n", contribuicao);
    

    

 
 
    

    
    
    
    
    
    
    
    
    
    
    

    return 0;
}          
              
