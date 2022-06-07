//Essa problema tambem pode ser resolvido com um laço for
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a; 
    int neg=0;
    
    printf ("Digite um valor:\n");
    scanf ("%f", &a);
        if (a<0){
        neg= neg+1;	//ou neg+=1
    }
    
    printf ("Digite um valor:\n");
    scanf ("%f", &a);
        if (a<0){
        neg= neg+1;	//ou neg+=1
    }
    
    printf ("Digite um valor:\n");
    scanf ("%f", &a);
        if (a<0){
        neg= neg+1;	//ou neg+=1
    }
    
    printf ("Digite um valor:\n");
    scanf ("%f", &a);
        if (a<0){
        neg= neg+1;	//ou neg+=1
    }
    
    printf ("Digite um valor:\n");
    scanf ("%f", &a);
        if (a<0){
        neg= neg+1;	//ou neg+=1
    }
    
    printf ("Foram digitados %d numeros negativos", neg);
      
	return 0;
}