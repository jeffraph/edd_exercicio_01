//EXERCICIO II

//Ler 5 numeros, armazenando-os no vetor x[5].
//Calcular a soma destes 5 numeros e mostra-la na tela.

#include <stdio.h>

int main() {

    int x[5];
    int somax = 0;
    
    for(int i =0; i<5; i++) {
        
        printf("informe o %dº numero: ", i+1);
        scanf("%d", &x[i]);

    }
    for(int i=0; i<5; i++) {
        somax += x[i]; 
    }
    printf("total: %d\n", somax);
}

    