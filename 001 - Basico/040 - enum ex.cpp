#include <iostream>
#include <stdlib.h>

using namespace std;


int main(int argc, char *argv[]) {
	
	enum armas{pistola = 100, escopeta, revolver, rifle}; /* Alem dos valores predefinidos eles podem ser
	modificados, sendo que se eu modificar apenas o primeiro valor, os seguintes serao 
	adicionados 1 com o primeiro valor e assim por diante */
	
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

