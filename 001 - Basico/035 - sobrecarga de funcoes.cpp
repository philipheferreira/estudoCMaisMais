#include <iostream>
#include <stdlib.h>

using namespace std;

/* Podesse colocar mais chamadas de funcoes com o mesmo nome para poder
colocar uma recepcao diferente de parametros. Montando cenarios diferentes
caso eu receba valores ou nao receba valores */

int main(int argc, char *argv[]) {
	
	void soma(int n1, int n2);
	void soma();
	
	soma(20, 30);
	soma();
	
	system("pause");
	
}

void soma(int n1, int n2){
	cout << "Soma dos valores: " << n1+n2 << "\n";
}

void soma(){
	int n1, n2, resultado;
	
	n1 = 10;
	n2 = 20;
	resultado = n1 + n2;
	cout << "\nSoma de " << n1 << " com " << n2 << " = " << resultado << "\n";
}

