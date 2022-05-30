#include <stdio.h>

int main(){
	
    int n, capacidade, i, entra, sai;
    int pdentro = 0, ultrapassou = 0;	//pdentro = pessoas que estão la dentro

    scanf("%i %i", &n, &capacidade);	//quantos testes serão feito e qual a capacidade maxima do elevador.

    for(i=1; i<=n; i++)
    {
        scanf("%i %i", &sai, &entra);	//quantas pessoas entraram e quantas subiram
        pdentro -= sai;
        pdentro += entra;
        if (pdentro > capacidade)
            ultrapassou++;
    }

    if (ultrapassou > 0)
        printf("Selvagens sao dificeis de ensinar.");
    else
        printf("Viva a conscientizacao.");
}