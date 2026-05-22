#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	void texto();
	void soma(int n1, int n2);
	int soma2(int n1, int n2);
	void tr(string tra[4]);
	
	int resultadoSoma;
	string transp[4] = {"carro", "moto", "barco", "aviso"};
	
	texto();
	soma(21, 23);
	resultadoSoma = soma2(10, 11);
	tr(transp);
	
	cout << "O valor do resultado da funcao soma sera o seguinte: " << resultadoSoma << ".\n";
	
	cout << argv[0] << "\n\n"; 
	
	system("pause");
	
}

void texto(){
	
	cout << "Eu sou o Philiphe Siqueira Ferreira\n";
	
}

void soma(int n1, int n2){
	cout << "Soma dos valores: " << n1+n2 << "\n";
}

int soma2(int n1, int n2){
	return n1+n2;
}

void tr(string tra[4]){
	for(int i = 0; i < 4; i++){
		cout << tra[i] << "\n";
	}
}
