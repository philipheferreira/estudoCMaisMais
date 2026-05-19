#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	int escolhaSwitchCase;
	
	cout << "Selecione uma cor:\n" ;
	cout << "[1] => Verde, [2] => Azul, [3] => vermelho.\n" ;
	
	cin >> escolhaSwitchCase;
	
	switch(escolhaSwitchCase) {
		case 1:
			cout << "Cor selecionada: Verde.\n";
			break;
		
		case 2:
			cout << "Cor selecionada: Azul.\n";
			break;
		
		case 3:
			cout << "Cor selecionada: Vermelho.\n";
			break;
		
		default:
			cout << "Valor selecionado invalido\n";
		
	}
	
	cout << "\nPrograma finalizado\n";
	
	system("pause");
}





