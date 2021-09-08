//EXERCICIO IV

//Gerar um vetor com 10 numeros da seguinte forma:
//cada numero guardado no vetor sera o valor da sua propria
//posição no vetor (seu indice) menos 2 (ou seja, Xi = i-2).
//Mostrar na tela este vetor.

#include <stdio.h>

int main() {

int x[10];

    for (int i = 0; i<10; i++) {
        x[i] = i - 2;
    }
    
    for (int i = 0; i<10; i++) {
        printf("indice %d = %d\n", i, x[i]);
    }
}


    