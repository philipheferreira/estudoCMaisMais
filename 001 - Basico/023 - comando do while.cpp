
#include <iostream>

using namespace std;

int main() {
	
	/*  */
	int tamanho = 7;
	int vetor[tamanho];
	int i;
	   

	/*  */
	for( i = 0; i < tamanho; i++){
		cout << "Digite o valor da variavel " << "\n";
		cin >> vetor[i];
	}
	
	cout << "\n\n";
	
	for( i = 0; i < tamanho; i++){
		cout << vetor[i] << "\n";
	}
}