/* Array ou vetor. Conjunto de variaveis que armazenam variaveis do mesmo tipo,
eu posso, dentro do array, armazernar a quantidade de variaveis que eu quiser.
Eu posso armazenar diferentes variaveis dentro do array, a unica coisa que
muda seria a posicao que a variavel se encontra dentro do array. Vou
utilizar o array unidirecional (array simples) nesse projeto */

#include <iostream>

using namespace std;

int main() {
	
	/* Declarei um vetor do tipo inteiro, que consegue armazenar
	5 valores diferentes, todos do mesmo tipo (inteiro). A 
	contagem das posicoes comeca do 0, e como sao 5 posicoes, termina
	na posicao 4 */
	int vetor[5];
	
	vetor[0] = 12;
	vetor[1] = 45;
	vetor[2] = 2;
	vetor[3] = 1;
	vetor[4] = 42;
	
	cout << "Vetor da primeira posicao, o valor dentro dele: " << vetor[0] << "\n";
	cout << "Vetor da segunda posicao, o valor dentro dele: " << vetor[1] << "\n";
	cout << "Vetor da terceira posicao, o valor dentro dele: " << vetor[2] << "\n";
	cout << "Vetor da quarta posicao, o valor dentro dele: " << vetor[3] << "\n";
	cout << "Vetor da quinta posicao, o valor dentro dele: " << vetor[4] << "\n";
	
}