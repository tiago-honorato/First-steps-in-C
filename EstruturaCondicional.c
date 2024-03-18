#include <stdio.h>

int main() {
	
    int idade = 23;

    if (idade >= 18) {
    	
        printf("Você é maior de idade.\n");
        
    } else if (idade >= 13) {
    	
        printf("Você é adolescente.\n");
        
    } else {
    	
        printf("Você é criança.\n");
        
    }

    return 0;
}