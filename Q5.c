#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    char Palavra[10], Reversa[10], aux;

    printf("Digite a palavra qeu deseja de forma reversa: ");
    gets(Palavra);
    fflush(stdin);

    int j=0;

    for (int i = strlen(Palavra)-1; i >= 0; i--){

        aux = Palavra[i];
        Reversa[j] = aux;
        j++;
    }

    printf("\nPalavra: %s\n", Palavra);
    printf("\nPalavra: %s\n", Reversa);


    return 0;
}