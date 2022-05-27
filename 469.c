#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=5, rJogadas, hJogadas, i, somaR=0, somaH=0;
    
    for(i=1;i<=n;i++){
        scanf("%d\n", &rJogadas);
        scanf("%d\n", &hJogadas);
        somaR+=rJogadas;	//faz a soma dos dados de Reinaldo
        somaH+=hJogadas;	//faz a soma dos dados de Helena
        
    }
    
     if(somaR==somaH){
            printf("EMPATE");
        }else if(somaR<somaH){
            printf("HELENA");
        }else
            printf("REINALDO");
    
	return 0;
}