// Port do Calcula (Calculadora Geral em Fortran para C)
// Written by Caio Cesar, 2023

#include <stdio.h>
#include <stdlib.h>
#include "calcula.h"

//Limpa o buffer do teclado
void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int main(){
    int LA, A, B, C;
    float RX, RY, RZ;
    char C0 = 's';
    LA = 1;
    //
    while(LA == 1){
        printf("\n");
        printf("Insira o primeiro número: ");
        scanf("%f", &RX);
        printf("\n");
        printf("Insira o segundo número: ");
        scanf("%f", &RY);
        // flush_in();
        RZ = mediador(RX, RY);
        printf("\n");
        printf("A média aritmetica é = %.3f\n", RZ);
        printf("\n");
        flush_in();
        printf("Deseja continuar: [S/N]\n");
        scanf("%c", &C0);
        if(C0 != 's' && C0 != 'S'){
            LA = 0;
        }
        else{
            LA = 1;
        }
    }
    printf("\n");
    printf("Fim da execução...\n");
    return(0);
}