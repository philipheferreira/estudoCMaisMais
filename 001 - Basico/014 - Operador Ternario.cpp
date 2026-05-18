#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	// (espressao) ? valor1 : valor2;
	
	int valorPrimeiraNota, valorSegundaNota, somaDaNota;
	string resultadoFinal;
		
	cout << "Digite a primeira nota: ";
	cin >> valorPrimeiraNota;
	cout << "Digite a segunda nota: ";
	cin >> valorSegundaNota;
	
	somaDaNota = valorPrimeiraNota + valorSegundaNota;
	
	resultadoFinal = (somaDaNota >= 60) ? "Aprovado" : "Reprovado";
	
	cout << "\nSituacao do Aluno: " << resultadoFinal << "\n";
	
	system("pause");
}





