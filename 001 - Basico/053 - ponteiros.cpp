#include <iostream>
#include <stdlib.h>

using namespace std;

/*  */

/*  */

int main(int argc, char *argv[]) {
	
	string veiculo = "carro";
	string *pv;
	
	pv = &veiculo; //Ponteiro PV recebe o endereco da variavel
	
	cout << veiculo << "\n\n"; /* Mostra o enderecamento 
	e onde foi armazenado */
	cout << pv << "\n\n";
	
	system("pause");
	
}

