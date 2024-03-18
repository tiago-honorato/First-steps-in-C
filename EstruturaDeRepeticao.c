#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 5; i++) {
    	
        printf("estrutura FOR: %d\n", i);
        
    }
    
    int contadorWhile = 1;
    
    while (contadorWhile <= 5) {
    	
        printf("estrutura WHILE: %d\n", contadorWhile);
        
        contadorWhile++;
        
    }
    
    int contadorDoWhile = 1;
    
    do {
    	
        printf("estrutura DO-WHILE: %d\n", contadorDoWhile);
        
        contadorDoWhile++;
        
    } while (contadorDoWhile <= 5);
    
    return 0;
    
}
