#include <iostream>
#include <stdlib.h>

/* */

using namespace std; 

int main() { 
	
	int variavel1, variavel2;  
 	int resultadoSoma, resultadoSubtracao, resultadoMultiplicacao;
 	float resultadoDivisao;
	
	 cout << "Digite o valor da primeira variavel: "; 
	 cin >> variavel1;
	 
	 cout << "\nDigite o valor da segunda variavel: ";
	 cin >> variavel2;
	 
	 resultadoSoma = variavel1 + variavel2;
	 
	 resultadoSubtracao = variavel1 - variavel2;
	 
	 resultadoMultiplicacao = variavel1 * variavel2;
	 
	 resultadoDivisao = (float) variavel1 / variavel2; 
	 
	 cout << "O resultado da soma de " << variavel1 << " com " << variavel2 << "sera o segunte resultado: " << resultadoSoma << ".\n"; 
	 
	 cout << "O resultado da subtracao de " << variavel1 << " com " << variavel2 << "sera o segunte resultado: " << resultadoSubtracao << ".\n"; 
	 
	 cout << "O resultado da multiplicacao de " << variavel1 << " com " << variavel2 << "sera o segunte resultado: " << resultadoMultiplicacao << ".\n"; 
	 
	 cout << "O resultado da divisao de " << variavel1 << " com " << variavel2 << "sera o segunte resultado: " << resultadoDivisao << ".\n"; 
	 
	 
	system("pause");
}

