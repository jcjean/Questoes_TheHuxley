#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int aprovados = 0;
    float port, mat, red;
   
    do{
        scanf("%f\n", &port);
        scanf("%f\n", &mat);
        scanf("%f\n", &red);
        
        if(port>=40 && mat>=21 && red>=7)
            aprovados+=1;
            
    }while (port>0);
    
    printf("%i\n", aprovados);
   
	return 0;
}