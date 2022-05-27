//Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo ele mesmo) é igual ao próprio número.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, x, a, b, c, d=0;
    
    scanf("%d", &n);	//quantos testes serão feitos
    
    for(a=1; a<=n; a++){	//laço pra pegar os numeros do input	
        scanf("%d", &x);
        c=x/2; d=0;
       
       for(b=1; b<=c; b++){	//laço que faz a soma dos divisores
            if(x%b==0)
                d+=b;
        }
        if(d==x)
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);
    }
	return 0;
}
