#include <stdio.h>

int main() {
	
    // Declaração e inicialização de um vetor
    int vetor[5] = {1, 2, 3, 4, 5};

    printf("Elementos do vetor:\n");
    // Acessando e exibindo elementos do vetor
    for (int i = 0; i < 5; i++) {
    	
        printf("elemento: %d\n", vetor[i]);
        
    }
    
    printf("\n");

	// Declaração e inicialização de uma matriz
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("Elementos da matriz:\n");
    // Acessando e exibindo elementos da matriz
    for (int i = 0; i < 3; i++) {
    	
        for (int j = 0; j < 3; j++) {
        	
            printf("elemento: %d\n", matriz[i][j]);
            
        }
        
        printf("\n");
    }

    return 0;
}
