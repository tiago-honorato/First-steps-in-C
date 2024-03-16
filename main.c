#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b);

int main() {
	
	int result = somar(10, 10);
	
	printf("salve!");
	
	printf("%d", result);
	
	return 0;
}

int somar(int a, int b){
	
	return a+b;
	
}