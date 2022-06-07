#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int idadeAdotante, idadeAdotado;
    char irmaoOUascendente, adocaoConj, casadosOuUniaoestavel, consentimentoResponsavel, paisDesc, consentimentoAdotado;
    
    scanf ("%i\n%c\n%c\n%c\n%i\n%c\n%c\n%c", &idadeAdotante, &irmaoOUascendente,&adocaoConj, 
    &casadosOuUniaoestavel, &idadeAdotado, &paisDesc, &consentimentoResponsavel, &consentimentoAdotado);
    //verificar se está dentro das regras
    if((idadeAdotante >18)&&(irmaoOUascendente=='N')&&(adocaoConj==casadosOuUniaoestavel)&&
    ((idadeAdotante-idadeAdotado) >16)&&(paisDesc!=consentimentoResponsavel)&&
    ((idadeAdotado>=12 && consentimentoAdotado=='S')||(idadeAdotado<12))){
         printf ("Pode adotar");   
        }
        else{
            printf ("Nao pode adotar");
        }
	return 0;
}