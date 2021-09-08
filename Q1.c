//EXERCICIO I

//Dada duas sequencias de 5 numeros, 
//calcule a soma de cada numero com o seu correspondente.


#include <stdio.h>

int main() {
    
    
    int v1[5] = {3, 1, 5, 8, 7};
    int v2[5] = {5, 4, 2, 15, 20};
    
    for(int i = 0; i < 5; i++) {
        
         printf("%d + %d = %d \n", v1[i], v2[i], v1[i] + v2[i]);
         
        } 
}