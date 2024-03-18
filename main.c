#include <stdio.h>
#include <stdlib.h>

//declarações das funções
int somar(int a, int b);
int converterParaDolar(int valor);

//função principal
int main() {
	
 	//declarações das variáveis
	int result, valor;
	//chamada da função somar();
	result = somar(10, 10);
	
	printf("Programa em C\n");
	
	printf("%d", result);
	
	valor = converterParaDolar(10);
	
	printf("\n%d", valor);
	
	/*
 	o return 0 na função principal(main) determinar se o programa foi executado com sucesso ou não.
  	Um valor de retorno de 0 normalmente indica que o programa foi concluído sem erros,
   	enquanto valores diferentes de zero indicam que ocorreu algum tipo de erro durante a execução do programa.
 	*/
	return 0;
}

//definição da função
int somar(int a, int b){
	
	//retorno da função
	return a+b;
	
}

//definição da função
int converterParaDolar(int valor){
	
	//retorno da função
	return valor/5;
	
}


