#include <iostream>

using namespace std; 

int main() { 
	
	// TIPO NOME;
	// TIPO NOME = VALOR;
	
	int valorInteiro = 20; /* A variavel do tipo inteira ira salvar valores que nao sao fracoes normalmente */
	char valorCaracter = 'P'; /* salva apenas um caractere */
	float valorFloat = 20.10; /* salva valores inteiros, fracionados */
	double valorDouble = 10.05; /* salva valores inteiros e fracionados e tem o dobro de possibilidade de armazenamento se comparado com o float */
	bool valorBoleano = true; /* consegue salvar apenas dois tipos diferentes de valores, true (1) ou false (0) */
	string nome = "Philiphe"; /* Salva nomes ou frases inteiras */
	
	cout << "A variavel inteira valorInteiro tem o seguinte valor armazenado:" << valorInteiro << "\n";
	
	cout<< "A variavel inteira valorInteiro aloca a seguinte quantidade de bytes para armazenamento: " << sizeof(valorInteiro) << " bytes\n\n";
	
	cout << "A variavel Char valorCaracter tem o seguinte valor armazenado:" << valorCaracter << "\n";
	
	cout<< "A variavel char valorCaracter aloca a seguinte quantidade de bytes para armazenamento: " << sizeof(valorCaracter) << " bytes\n\n";
	
	cout << "A variavel float valorFloat tem o seguinte valor armazenado:" << valorFloat << "\n";
	
	cout<< "A variavel float valorFloat aloca a seguinte quantidade de bytes para armazenamento: " << sizeof(valorFloat) << " bytes\n\n";
	
	cout << "A variavel double valorDouble tem o seguinte valor armazenado:" << valorDouble << "\n";
	
	cout<< "A variavel double valorDouble aloca a seguinte quantidade de bytes para armazenamento: " << sizeof(valorDouble) << " bytes\n\n";
	
	cout << "A variavel bool valorBoleano tem o seguinte valor armazenado:" << valorBoleano << "\n";
	
	cout<< "A variavel bool valorBoleano aloca a seguinte quantidade de bytes para armazenamento: " << sizeof(valorBoleano) << " bytes\n\n";
	
	cout << "A variavel string nome tem o seguinte valor armazenado:" << nome << "\n";
	
	cout<< "A variavel string nome aloca a seguinte quantidade de bytes para armazenamento: " << sizeof(nome) << " bytes\n\n";
	
	
	return 0;
}





