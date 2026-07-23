#include <iostream>
#include <stdio.h> // Para funcao gets
#include <stdlib.h> // para utilizar com a funcao malloc

/* 
	A funcao malloc sera utilizada para alocar dinamicamente a variavel
	criaca. Para utilizar o malloc sera necessario transformar a variavel 
	em ponteiro
 */


using namespace std;



int main() {
	
	char *vnome;
	vnome = (char *) malloc(sizeof(char) + 1); /* malloc tem um retorno void, por isso necessario
	declarar o (char *) para determinar o tipo de memoria que vai ser alocada.
	dentro de malloc posso so colocar um numero, mas geralmente 
	para melhor controle ser feito malloc(sizeof(char)); tambem posso declarar
	o espaco de memoria necessario alocado mais um valor ou vezer o valor
	necessario para extender a memoria utilizada
	 */
	
	/* malloc( 2 * sizeof(char)); */
	/* malloc(sizeof(char) + 1); */
	
	gets(vnome);
	
	cout << vnome;
	
	
}