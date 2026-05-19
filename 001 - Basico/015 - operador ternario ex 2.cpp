#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	// (espressao) ? valor1 : valor2;
	/* Esse exemplo serve para constextualizar que o operador ternario
	pode servir para realizar acoes, que serao selecionadas atendendo
	as os requisitos minimos, sendo apenas 2 opcoes possiveis */
	int n1, x;
	
	x = 5;
	
	cout << "Digite um valor: ";
	cin >> n1;
	
	(n1 >= 10) ? x++ : x--;
	
	cout << "\nNovo valor do X: " << x << "\n";
	
	system("pause");
}





