#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//a questão da o valor de pi. O raio tem que ser em cm e pede o resultado com 4 casas decimais
int main() {
    float area, pi=3.14159, raio;
    
    scanf("%f", &raio);
    
    area= pi*(raio * raio)/10000;
    
    printf("Area = %.4f", area);
    
	return 0;
}