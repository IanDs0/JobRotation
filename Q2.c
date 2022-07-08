#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Fibonacci(int Entrada){

    int Valor1=0, Valor2=1, teste=0;

    do{

        if(Entrada == teste){
            return 1;
        }
        
        teste = Valor2;
        Valor2 += Valor1;
        Valor1 = teste;

    }while(teste <= Entrada);
    return 0;
}

int main(){

    int Entrada=0;

    printf("Digite o valor de entrada: ");
    scanf("%d",&Entrada);

    if(Fibonacci(Entrada)==1){

        printf("\n [ %d ] Pertence a Fibonacci",Entrada);

    }else{

        printf("\n Não Pertence a Fibonacci");

    }

    return 0;

}