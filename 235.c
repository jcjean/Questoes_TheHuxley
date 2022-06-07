#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,i,j,n,p;
    int c=0, restoImpar=0, restoPar=0, x=0;
		int par[5],impar[5],max[15];
 
    for(b=0; b<15; b++)
        scanf("%d", &max[b]);
    
		for(a=0; a<15; a++){
        if(restoImpar==5){
            for(n=0; n<5; n++)
                printf("impar[%d] = %d\n", n, impar[n]);
            restoImpar=0;
        }
        if(restoPar==5){
            for(p=0; p<5; p++)
                printf("par[%d] = %d\n", p, par[p]);
            restoPar=0;
        }
				if(max[a]%2!=0){
            impar[c]=max[a];
            ++c;
            restoImpar++;
            if(c==5) c=0;
        }
        if(max[a]%2==0){
            par[x]=max[a];
            ++x;
            restoPar++;
            if(x==5) x=0;
        }
    }
    for(i=0; i<restoImpar; i++)
            printf("impar[%d] = %d\n", i, impar[i]);
    for(j=0; j<restoPar; j++)
            printf("par[%d] = %d\n", j, par[j]);
	return 0;
}