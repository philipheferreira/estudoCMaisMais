
#include <iostream>

using namespace std;

int main() {
	
	/*  */
	int vetor[7];
	int i;
	
	vetor[0] = 12;
	vetor[1] = 45;
	vetor[2] = 2;
	vetor[3] = 1;
	vetor[4] = 42;
	vetor[5] = 69;
	vetor[6] = 40;
	/* No setor 2, eu utilizei o sizeof, que ira retornar o tamanho
	do tipo. Ou seja, o tamanho em bytes do valor inteiro. Ou seja, sera
	4 bytes vez os 7 espacos. entao seria so pegar o sizeof e dividor por
	4 que ira retornar o tamanho do nosso array */
	for( i = 0; i < sizeof(vetor)/4; i++){
		cout << vetor[i] << "\n";
	}
	
}