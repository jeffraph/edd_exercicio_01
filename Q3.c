//EXERCICIO III

//Ler 5 numeros, armazenando-os no vetor x[5].
//Copiar este vetor, de tras para frente(na ordem inversa de leitura),
//em um segundo vetor y[5].Mostrar o vetor y.

#include <stdio.h>

int main() {

int x2[5];
int y2[5];
int contador = 0;
    
    for(int i =0; i<5; i++) {
        
        printf("informe o %dº numero: ", i+1);
        scanf("%d", &x2[i]);

    }
    
    for(int i=4; i>=0; i--) {
        
        y2[contador] = x2[i];
        contador++;
        
    }  
    
    for(int i=0; i<5; i++) {
        
        printf("y[%d] : %d\n",i, y2[i]);

    }
}


    