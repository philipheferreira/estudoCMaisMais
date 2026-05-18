#include <iostream>
#include <stdlib.h>

/* Quando eu declaro uma variavel dentro de uma funcao ela so ira existir
e ser utilizada localmente. Caso a variavel seja declarada fora de qualquer 
funcao, ela ira existir globalmente em todo o programa, podendo ser chamada
e utilizada por qualquer funcao do programa. Ela nao sera utilizada em
um bloco de codigo especifico, mas sim em todo o bloco de codigo */

int gVariavelGlobal1, gVariavelGlobal2; // variaveis globais

using namespace std; 

int main() { 
	
	int variavelLocal1, variavelLocal2; // variaveis locais
	
	
	system("pause");
}

