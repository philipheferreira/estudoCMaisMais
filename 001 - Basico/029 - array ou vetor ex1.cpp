
#include <iostream>

using namespace std;

int main() {
	
	/* Declarei um vetor do tipo inteiro, que consegue armazenar
	5 valores diferentes, todos do mesmo tipo (inteiro). A 
	contagem das posicoes comeca do 0, e como sao 5 posicoes, termina
	na posicao 4 */
	int vetor[5], i;
	
	vetor[0] = 12;
	vetor[1] = 45;
	vetor[2] = 2;
	vetor[3] = 1;
	vetor[4] = 42;
	
	for(i = 0; i < 5 ; i++){
		cout << vetor[i] << "\n";
	}
	
}