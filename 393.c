#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int pregos=0;
   float cont=0;
   
   while(pregos%2==0){	//enquanto o resto da divisão entre pregos e 2 for 0
       scanf("%i\n", &pregos);
       
       if(pregos%2==0){
           cont+=pregos;	
       }
   }
   
   printf("%.2f\n%i\n", ceil(cont/12)*7.89, (int)((ceil(cont/12)*12)-cont));
   //ceil é uma funçao em C que arredonda o valor pra cima
	return 0;
}