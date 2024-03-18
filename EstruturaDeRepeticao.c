#include <stdio.h>

int main() {
	
    // Imprime os números de 1 a 5
    
    for (int i = 1; i <= 5; i++) {
    	
        printf("estrutura FOR: %d\n", i);
        
    }
    
    int contadorWhile = 0;
    
    while (contadorWhile <= 5) {
    	
        printf("%d\n", contador);
        
        contadorWhile++;
        
    }
    
    int contadorDoWhile = 1;
    
    do {
    	
        printf("%d\n", contador);
        
        contador++;
        
    } while (contadorDoWhile <= 5);
    
    return 0;
    
}
