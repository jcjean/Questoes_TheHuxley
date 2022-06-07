#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float x, y, z, media;
    int maiores=0;
    
    scanf("%f\n%f\n%f", &x, &y, &z);
    
    media = (x+y+z)/3;
    
    if(x>media){
        maiores++;
    }
    if(y>media){
        maiores++;
    }
    if(z>media){
        maiores++;
    }
    
    printf("%d ", maiores);
    
	return 0;
}