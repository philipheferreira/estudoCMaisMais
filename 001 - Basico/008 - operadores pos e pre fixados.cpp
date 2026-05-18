#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	int variavel1 = 0;
	
	/*n1++ -> pos incremento ou pos fixado */
	
	/*++n1 -> pre incremento ou pre fixado */
	
	cout << "Utilizando a chamada com o pre incremento: " << ++variavel1; /* A alteracao do 
	valor ira aparecer na chamada pois o incremento do valor ocorre antes da chamada */
	
	cout << "\nMostrando o resultado apos o pre incremento: " << variavel1;
	
	cout << "\nUtilizando a chamada com o pos incremento.: " << variavel1++; /* A modificacao nao ira acontecer
	pois ela ocorre apos da chamada que esta sendo realizada. Na proxima vez que chamar a variavel
	ira mostrar */
	
	cout << "\nMostrando o resultado apos o pos incremento: " << variavel1 << "\n";
	
	system("pause");
}





