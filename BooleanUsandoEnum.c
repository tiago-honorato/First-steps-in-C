//bibliotecas
#include <stdio.h>


/*
define um tipo enum com FALSE e TRUE.
typedef significa "type definition"(definição de tipo).
*/
typedef enum {
	
	FALSE = 0,
	TRUE = 1

//ValorBoolean é o nome que o tipo de dado vai receber.
} ValorBoolean;

int main(){

	/*
	Em C, o tipo de dado mais próximo de um booleano é int,
	onde zero (0) é considerado falso e qualquer outro valor é considerado verdadeiro.
	No entanto, para maior clareza e legibilidade, é comum usar um ENUM para representa-los.
	*/

	//criando uma variavel do tipo de dado ValorBoolean
	ValorBoolean meuValor = TRUE;
	
	
	return 0;
}