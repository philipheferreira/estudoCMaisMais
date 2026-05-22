#include <iostream>
#include <stdlib.h>

using namespace std;

/* Posso colocar um valor padrao a ser mostrado caso eu nao receba nenhum
parametro. No caso posso estabelecer um valao padrao para um parametro 
para ele nao ficar vazio */

int main(int argc, char *argv[]) {
	
	void imp(string txt = "Philiphe");
	
	imp("youtube"); // quando recebo um valor mostro ele
	imp(); // Quando nao recebo mostro o valor pre definido
	
	system("pause");
	
}

void imp(string txt){
	cout << " \n " << txt << "\n";
}



