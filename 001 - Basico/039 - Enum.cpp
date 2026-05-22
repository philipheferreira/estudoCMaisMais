#include <iostream>
#include <stdlib.h>

using namespace std;


int main(int argc, char *argv[]) {
	
	enum armas{pistola, escopeta, revolver, rifle}; /* O enum defini um tipo. O Enum so armazena numeros interios. Ele 
	armazena strings mas relaciona eles com valores inteiros. Apos declarar
	uma string dentro do enum ele ja entrega um valor inteiro para a variavel
	dentro do enum criado, comecando de zero e aumentando gradativamente */
	
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

