//6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e reprovação caso contrário. A função deve exibir mensagens para os dois casos. (0.3 ponto)


#include <stdio.h>

void validarNota(int nota){
    if(nota >= 7){
        
        printf("Você foi aprovado!");
    }else{
        printf("Você foi reprovado!");
    }
}
int main() {

int nota;

            printf("Informe sua nota: ");
                scanf("%d", &nota);
    
    validarNota(nota);        
   


 
 
    

    
    
    
    
    
    
    
    
    
    
    

    return 0;
}          
              
