#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int INDICE = 13, SOMA = 0, K=0;

    for(K=0;K<INDICE;){
        K++;
        SOMA+=K;
    }

    printf("SOMA: %d\n", SOMA);

    return 0;

}