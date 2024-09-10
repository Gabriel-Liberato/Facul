// 9. Crie uma função que receba o salário bruto de uma pessoa e calcule o valor do Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024. Utilize as alíquotas e deduções conforme a tabela abaixo:

//● Até R$ 2.112,00: Isento
//● De R$ 2.112,01 até R$ 2.826,65: Alíquota de 7,5% (dedução de R$ 158,40)
//● De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (dedução de R$ 370,40)
//● De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22,5% (dedução de R$ 651,73)
//● Acima de R$ 4.664,68: Alíquota de 27,5% (dedução de R$ 884,96)



#include <stdio.h>

void validarImposto(float salario){
 float imposto;
    
    
        if(salario <= 2112){           
                printf("O imposto a ser pago sobre R$%.2f é isento.", salario);
        }
    
        else if(salario > 2112 && salario <= 2826.65){  
            imposto = ((salario*75)/1000);
                printf("O imposto a ser pago sobre R$%.2f é de R$%.2f:", salario, imposto);
        }

        else if(salario > 2826.65 && salario <= 3751.05){  
            imposto = ((salario*15)/100);
                printf("O imposto a ser pago sobre R$%.2f é de R$%.2f:", salario, imposto);
        }


        else if(salario > 3751.05 && salario <= 4664.68){  
            imposto = ((salario*225)/1000);
                printf("O imposto a ser pago sobre R$%.2f é de R$%.2f:", salario, imposto);
        }

        else if(salario > 4664.68){
            imposto = ((salario*275)/1000);
                printf("O imposto a ser pago sobre R$%.2f é de R$%.2f:", salario, imposto);

        }else{
                printf("O imposto a ser pago sobre R$%.2f é isento.", salario);    
        }
            
 }

int main() {
float salario,imposto;

        printf("Informe o seu salário: ");
            scanf("%f", &salario);

                validarImposto(salario);
    

    

 
 
    

    
    
    
    
    
    
    
    
    
    
    

    return 0;
}          
              
