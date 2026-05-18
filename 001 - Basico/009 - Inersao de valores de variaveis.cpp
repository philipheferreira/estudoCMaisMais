#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	/* Assim como no incremento e decremento tem como alterar o valor das variaveis
	de forma rapida com relacao ao sinal. Se em um momento ele for positovo,
	consigo inverter o valor rapidamente para negativo, e vice e versa */
	
	int variavelNumero = 10;
	
	cout << "Valor da variavel antes da inversao de valor: " << variavelNumero << "\n\n";
	
	// variavelNumero = variavelNumero * -1;
	variavelNumero =- variavelNumero;
	
	cout << "Valor da variavel apos a inversao de valor: " << variavelNumero<< "\n\n";
	
	system("pause");
}





