#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	/* Incremento e decremento sao formas rapidas de somar (incrementar) e subtrair (decrementar).
	Quando utilizar qualquer um deles ira salvar a operacao realizada dentro da propria variavel
	para ser utilizada novamente, so que com o novo valor resultado da operacao feita */
	
	int variavel1, variavel2;
	
	variavel1 = 0;
	variavel2 = 10;
	
	cout << "O valor da primeira variavel sera o seguinte: " << variavel1;
	
	variavel1 += 5; //isso seria o mesmo que n1 = n1 + 5;
	
	cout << "\nO valor da primeira variavel apos o incremente sera o segunte: " << variavel1;
	
	variavel1 -= 2; // isso seria o mesmo que n1 = n1 - 2;
	
	cout << "\nO valor da primeira variavel apos o decremento sera o seguinte: " << variavel2;
	
	variavel1 *= 10;
	
	cout << "\nO valor da primeira variavel apos a chamada rapida de multiplicacao: " << variavel1;
	
	variavel1 /= 2;
	
	cout << "\nO valor da primeira variavel apos a chamada rapida de divisao: " << variavel1 << "\n";
	
	
	variavel1++; //isso seria o mesmo que n1 = n1 + 1;
	
	variavel1--; //isso seria o mesmo que n1 = n1 - 1;
	
	system("pause");
}





