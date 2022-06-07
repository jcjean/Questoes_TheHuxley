#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float pH;
    
    scanf ("%f", &pH);
    
    if (pH>7.0 && pH<=14.0){
        printf ("Basica");
    }
    if (pH<7.0 && pH>=1.0){
        printf ("Acida");
    }
    if (pH==7.0){
        printf ("Neutra");
    }
    
	return 0;
}