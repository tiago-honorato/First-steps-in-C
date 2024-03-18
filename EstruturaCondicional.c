#include <stdio.h>

int main() {
	
    int idade = 23;
    //Condicional IF
    if (idade >= 18) {
    	
        printf("Você é maior de idade.\n");
        
    } else if (idade >= 13) {
    	
        printf("Você é adolescente.\n");
        
    } else {
    	
        printf("Você é criança.\n");
        
    }
    //operador Ternário
    int a = 10;
    int b = 5;
    int maior;

    // Verifica qual é o maior número entre a e b
    maior = (a > b) ? a : b;

    printf("O maior número é: %d\n", maior);

    return 0;
}
