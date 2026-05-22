#include <iostream>
#include <stdlib.h>

using namespace std;


int main(int argc, char *argv[]) {
	
	enum armas{pistola = 100, escopeta = 22, revolver = 7, rifle = 46}; /* posso var um valor individual para cada
	um dos itens e esses itens terao esse valor */
	
	armas armaSelecionada; /* armas referente ao enum criado, e o tipo que o
	nome vai ser armaSelecionada */
	
	armaSelecionada = pistola;
	
	cout << "Valor da pistola no enum da variavel armaSelecionada: " << armaSelecionada << "\n";
	
	armaSelecionada = escopeta;
	
	cout << "Valor da escopeta no enum da variavel armaSelecionada: " << armaSelecionada << "\n";
	
	armaSelecionada = revolver;
	
	cout << "Valor da revolver no enum da variavel armaSelecionada: " << armaSelecionada << "\n";
	
	armaSelecionada = rifle;
	
	cout << "Valor da rifle no enum da variavel armaSelecionada: " << armaSelecionada << "\n";
	

	system("pause");
	
}

