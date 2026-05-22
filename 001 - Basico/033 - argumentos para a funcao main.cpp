#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	/* Dentro da funcao main eu tenho o argumento int argc: Vai guardar a quantidade
	de parametros informado. E o segundo vai ser um parametro do tipo char
	que sera um ponteiro, o char *argv[]: Um ponteiro para uma matriz de ponteiro
	de caracterem ou seja, cada elemento dessa matriz vai apontar para um argumento
	digitado que ira ficar armazenado nessa matriz, ou seja, armazena os argumentos
	passados.
	O argc armazena a quantidade de argumentos, o *argv[] armazena o conteudo 
	dos argumentos */
	
	cout << argv[0] << "\n\n"; /* Ira mostrar o nome do programa, porque
	ate entao sera o unico valor salvo ate entao */
	
	system("pause");
	
}