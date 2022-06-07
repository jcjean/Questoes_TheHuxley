#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int qntDias, km;
  float valor;
	
  scanf ("%d", &qntDias);
  scanf ("%d", &km);
    
  valor= 90*qntDias;
    
  if (km/100.0>qntDias){
  	valor= valor+(km-100*qntDias)*12;
      printf ("%.2f", valor);
		}
    else{
    	printf ("%.2f", valor);
			}
	return 0;
}