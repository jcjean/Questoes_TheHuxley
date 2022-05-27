#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, i, u;

    scanf("%d",&n);	//quantos ingressos serão sorteados
    
    for(i = 1; i <= n; i++){               
        scanf("%d", &u);	//numero do ingresso
            if(i == u)		//se o numero do ingresso for igual ao indice, é o vencedor
                printf("o ingresso de numero %d foi sorteado", u);
          }
        return 0;
}