//2) Faça um programa que preencha dois vetores de dez
//elementos numéricos cada um e mostre o vetor resultante da
//intercalação deles.




#include <stdio.h>

int main(){
int v1[10];   
int v2[10]; 
int v3[20]; 

    for(int x = 0; x < 10; x++){
        printf("Informe o %d° numero do vetor 1: ", x+1);
        scanf("%d", &v1[x]);
    }
    printf(" \n");
    printf(" \n");
    printf("//-----//-------//------------//-------------//------//");
    printf(" \n");
    printf(" \n");
    
    for(int x = 0; x < 10; x++){
        printf("Informe o %d° numero do vetor 2: ", x+1);
        scanf("%d", &v2[x]);
    }
    
        for(int x = 0; x < 10; x++){
            v3[x * 2] = v1[x];
            v3[x * 2 + 1] = v2[x];
            
        }
        
        for(int x = 0; x < 10; x++){    
            printf("VETOR 1: %d\n", v3[x * 2]);
            printf("VETOR 2: %d\n", v3[x * 2 + 1]);
            
        }    
        
    
}