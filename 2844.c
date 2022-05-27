#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valor=0, soma=0, media=0, t=0;
    
    printf("Insira os valores das doacoes:\n");
    
    do{
        scanf("%f\n", &valor);
        
        if(valor>0){
            soma=soma+valor;
            t+=1;
            media=soma/t;
        }

    }while(valor>0);
    
    printf("Total arrecadado: %.2f\n", soma);
    printf("Valor medio da doacao: %.2f\n", media);

	return 0;
}