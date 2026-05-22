#include <iostream>
#include <stdlib.h>

using namespace std;

/* Funcao que chama ela mesma para poder realizar uma funcao especifica. Ela
chama a funcao e geralmente tem 2 saidas de resposta para poder
ficar repetindo ate concluir a sua funcionalidade */


int main(int argc, char *argv[]) {
	
	void funcaoContador(int num, int contador = 0);
	
	funcaoContador(20); /* coloquei apenas um parametro, entao subtendesse
	que esse sera num, e o contador sera igual a zero. */
	
	system("pause");
	
}


void funcaoContador(int num, int contador){
	cout << contador << "\n";
	if (num > contador){
		funcaoContador(num, ++contador); /* Ao chamar a funcao, pelo parametro 
		adiciona um valor a variavel contador */
	}
}



