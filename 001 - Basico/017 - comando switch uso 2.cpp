#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	/* Esse exemplo serve pra mostrar que os case dentro do switch sempre
	vai depender do break, enquanto um case nao tiver o break ele nao
	vai parar, nesse caso eu utilizei de uma forma que ele pega ate
	a funcionalidade do proximo quando utilizado, terminando apenas quando identifica o break */
	
	int escolhaSwitchCase;
	
	cout << "Selecione uma cor:\n" ;
	cout << "[1, 2, 3] => Verde, [4, 5, 6] => Azul\n" ;
	
	cin >> escolhaSwitchCase;
	
	switch(escolhaSwitchCase) {
		case 1:
		case 2:
		case 3:
			cout << "Cor selecionada: Verde.\n";
			break;
		case 4:
        case 5:
        case 6:
			cout << "Cor selecionada: Azul\n";
			break;
		default:
			cout << "Valor selecionado invalido\n";
		
	}
	
	cout << "\nPrograma finalizado\n";
	
	system("pause");
}





