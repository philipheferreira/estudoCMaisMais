#include <iostream>
#include <stdlib.h>

using namespace std; 

int main() { 
	
	/* Se utilizazndo do sistema de switch e break tambem se torna possivel
	criar um sistemas de chamadas dentro do switch com outros switchs, para
	selecionar que certas mensagens aparecam para mais de uma resposta */
	
	int escolhaSwitchCase;
	
	cout << "Selecione uma cor:\n" ;
	cout << "[1] => Carro, [2] => Moto, [3] => Aviao, [4] => Helicoptero\n" ;
	
	cin >> escolhaSwitchCase;
	
	switch(escolhaSwitchCase) {
		case 1:
		case 2:
			cout << "Transporte terrestre\n";
			switch(escolhaSwitchCase){
				case 1:
					cout << "Carro selecionado.\n";
					break;
				case 2:
					cout << "Moto selecionada.\n";
					break;
			}
			break;
		case 3:
        case 4:
        	cout << "\nTransporte aereo.\n";
        	switch(escolhaSwitchCase){
				case 3:
					cout << "Aviao selecionado\n";
					break;
				case 4:
					cout << "Helicoptero Selecionado\n";
					break;
				
			}
			break;
		
		default:
			cout << "Valor selecionado invalido\n";
		
	}
	
	cout << "\nPrograma finalizado\n";
	
	system("pause");
}





