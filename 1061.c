#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float pi=3.14, raio1, raio2, areaCirc1, areaCirc2;
    
    scanf("%f %f", &raio1, &raio2);
    
    areaCirc1= pi*pow(raio1, 2);
    areaCirc2= pi*pow(raio2, 2);
    
    if(areaCirc1>areaCirc2){
        printf("Primeiro circulo");
    }else if(areaCirc1<areaCirc2){
        printf("Segundo circulo");
    }else
        printf("Iguais");
    
    
	return 0;
}