#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
   float litros, valorPagar;
   char tipo;

   scanf("%f\n%c", &litros, &tipo);
	//verifica as condições que a questão pede, para aplicar os descontos.
   if(tipo=='G'){
      if(litros<=20.0){
           valorPagar = litros*(2.50-(2.50*0.04));
       }
        if(litros>20.0){
           valorPagar = litros*(2.50-(2.50*0.06));
       }
   }

   if(tipo=='A'){
      if(litros<=20.0){
           valorPagar = litros*(1.90-(1.90*0.03));
       }
         if(litros>20.0){
           valorPagar = litros*(1.90-(1.90*0.05));
       }
   }

   if(tipo=='D'){
        if(litros>25.0){
           valorPagar = litros*(1.66-(1.66*0.04));
       }else{
           valorPagar = litros*1.66;
       }
   }
   
  printf("R$ %.2f\n", valorPagar);

	
	return 0;
}