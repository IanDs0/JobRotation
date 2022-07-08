#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* int (int Entrada){


} */

int main(){

    float SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, Outros = 19849.53, Total = 0;

    Total = SP + RJ + MG + ES + Outros;


    printf("\nPercentual de representação");
    printf("\nSP : %f\n", (SP/Total));
    printf("\nRJ : %f\n", (RJ/Total));
    printf("\nMG : %f\n", (MG/Total));
    printf("\nES : %f\n", (ES/Total));
    printf("\nOutros : %f\n", (Outros /Total));

    return 0;
}